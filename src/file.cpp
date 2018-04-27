/*
 * file.cpp
 *
 *  Created on: 25.04.2018
 *      Author: vkuzmenko
 */

#include <cstdlib>
#include <cassert>
#include <sstream>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpointer/jsonpointer.hpp>
#include <search_strings.h>
#include <str_key_value_pair.h>

// sort
bool operator<( const TStr_key_value_pair& a, const TStr_key_value_pair& b )
{
  return a.value < b.value;
}

// unique
bool operator==( const TStr_key_value_pair& a, const TStr_key_value_pair& b )
{
  return a.value == b.value;
}

//============================================================
// additinal function that find all strings in json object
// return : vector with a jsonpointer's keys to strings
//============================================================

inline auto const find_all_strings_in_json( jsoncons::json const& j )
{
  TPointersStrings sp;
  sp.f( j, std::string( "/" ) );
  return sp.get();
};

inline auto const form_pairs_vector( jsoncons::json const& j )
{
  std::vector<TStr_key_value_pair> kv;
  for ( auto const& p : find_all_strings_in_json( j ) )
  {
    auto value = jsoncons::jsonpointer::get( j, p );
    auto s = value.as_string();
    kv.push_back( TStr_key_value_pair( p, s ) );
  }
  return kv;
}
template <typename T>
inline auto remove_a_from_b( std::vector<T> a, std::vector<T> b )
{
  b.erase( std::remove_if( a.begin(), a.end(),
                           [b]( const auto& x ) { return std::find( b.begin(), b.end(), x ) != b.end(); } ),
           a.end() );

  return b;
}

template <typename T>
std::vector<T> find_all( std::vector<T> input, T value )
{
  std::vector<T> matches;
  for ( auto i = input.begin(), toofar = input.end(); i != toofar; ++i )
    if ( *i == value ) matches.push_back( *i );
  return matches;
};

jsoncons::json const strings( jsoncons::json const& json_lpm, std::string& main )
{
  jsoncons::json j = json_lpm;
  auto str_o( form_pairs_vector( j ) );
  auto kv( str_o );
  std::sort( kv.begin(), kv.end() );
  auto last = std::unique( kv.begin(), kv.end() );
  kv.erase( last, kv.end() );
  std::ofstream o_cpp( "s.cpp" );

  if ( o_cpp.is_open() )
  {
    o_cpp << std::string(
        "namespace Firmware {\n namespace System  {\n "
        "namespace Parameters  {\n // clang-format off\n" );
    for ( auto const& e : kv )
    {
      auto s = e.key;
      std::transform( s.begin(), s.end(), s.begin(), []( char ch ) { return ch == '/' ? '_' : ch; } );
      o_cpp << std::string( "__attribute__( ( __section__( \".qfln \" ) ) ) const char " );
      o_cpp << s;
      o_cpp << "[] = \"";
      o_cpp << e.value;
      o_cpp << "\";" << std::endl;
      main += std::string( "extern const char " );
      main += s;
      main += std::string( "[];\n" );
    }
    o_cpp << std::string( "// clang-format on\n}}}" );
  }
  o_cpp.close();
  // TODO: This must written as C++ Clang library function call
  system( "\"C:\\Program Files\\LLVM\\bin\\clang-format.exe\" s.cpp > strings.cpp" );

  for ( auto const& e : kv )
  {
    auto s = e.key;
    std::transform( s.begin(), s.end(), s.begin(), []( char ch ) { return ch == '/' ? '_' : ch; } );
    jsoncons::jsonpointer::replace( j, e.key, jsoncons::json( s ) );
    //auto value = jsoncons::jsonpointer::get( j, e.key );
    //auto ss = value.as_string();
  }

  for ( auto const& e : kv )
  {
    auto unique = e.key;
    std::transform( unique.begin(), unique.end(), unique.begin(), []( char ch ) { return ch == '/' ? '_' : ch; } );
    for ( auto const& k : find_all( str_o, e ) )
      jsoncons::jsonpointer::replace( j, k.key, jsoncons::json( unique ) );
  }

  return j;
}
