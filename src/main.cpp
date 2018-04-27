/*
 * main.cpp
 *
 *  Created on: 24.04.2018
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
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpointer/jsonpointer.hpp>
#include <search_strings.h>
#include <str_key_value_pair.h>
#include <file.h>
//#include "clang/Format/Format.h"

class TSearchByKey
{
  std::vector<std::string> pointers;
  const std::string sc;

 public:
  TSearchByKey( std::string s ) : sc( s ) {}
  std::string f( jsoncons::json j, std::string str )
  {
    std::string s;
    if ( j.is<jsoncons::json::object>() )
      for ( const auto& kv : j.object_range() )
      {
        std::string name( kv.key() );
        std::transform( name.begin(), name.end(), name.begin(), []( char ch ) { return ch == ' ' ? '_' : ch; } );
        jsoncons::json v = kv.value();
        std::string sn = str + name + "/";

        if ( v.is<jsoncons::json::object>() )
        {
          s = f( v, sn );
        }
        else if ( name == sc )
        {
          s = str + name;
          pointers.push_back( s );
        }
      }
    return s;
  }
  auto const& get( void )
  {
    return pointers;
  }
};

class TSearchByKeyValue
{
  std::vector<std::string> pointers;
  const std::string key;
  const std::string value;

 public:
  TSearchByKeyValue( std::string const& k, std::string const& v ) : key( k ), value( v ) {}
  std::string f( jsoncons::json j, std::string str )
  {
    std::string s;
    if ( j.is<jsoncons::json::object>() )
      for ( const auto& kv : j.object_range() )
      {
        std::string name( kv.key() );
        std::transform( name.begin(), name.end(), name.begin(), []( char ch ) { return ch == ' ' ? '_' : ch; } );
        jsoncons::json v = kv.value();
        std::string sn = str + name + "/";
        //std::cout << str << std::endl;
        if ( v.is<jsoncons::json::object>() )
        {
          s = f( v, sn );
        }
        else if ( ( name == key ) && ( v.as_string() == value ) )
        {
          s = str + name;
          pointers.push_back( s );
        }
      }
    return s;
  }
  auto const& get( void )
  {
    return pointers;
  }
};

//=============================================================
// create C++ struct with all values of json file
// This Structure is devoted to flashing external flash
//=============================================================

std::string create( jsoncons::json j, bool instance = true )
{
  std::string s;
  if ( j.is<jsoncons::json::object>() )
    for ( const auto& kv : j.object_range() )
    {
      std::string name( kv.key() );

      // if within key there are spaces -> change to "_"
      std::transform( name.begin(), name.end(), name.begin(), []( char ch ) { return ch == ' ' ? '_' : ch; } );
      jsoncons::json v = kv.value();
      if ( v.has_key( "value" ) )
      {
        s += std::string( "struct T_" + name + " {\n" );
        auto value = v[ "value" ];
        auto access = v[ "access" ].as_string();
        auto data_type = v[ "T" ].as_string();
        auto w_value = v[ "w_value" ].as_string();
        if ( access.size() == 1 ) s += std::string( "const char access = \'" + access + "\';\n" );

        if ( value.is_array() )
        {
          auto a = value.as<std::vector<std::string>>();
          std::stringstream ss;
          ss << a.size();
          std::string size( ss.str() );

          s += std::string( "const " + data_type + " value[" + size + "] = { " );
          for ( auto const& value_in_array : a )
          {
            s += std::string( value_in_array );
            s += ", ";
          }
          s.erase( s.end() - 2, s.end() );
          s += "};\n";
          s += std::string( data_type + "* const w_value = " + w_value + ";\n" );
        }
        else
        {
          s += std::string( "const " + data_type + " value = " + value.as_string() + ";\n" );
          s += std::string( data_type + "* const w_value = " + w_value + ";\n" );
        }
        s += std::string( " \n} __attribute__( ( packed ) );\n" );
        s += std::string( "const T_" + name + "  " + name + ";\n" );
      }
      else if ( ( name == "name" ) && ( v.is_string() ) )
      {
        s += std::string( "const char * const name = " + v.as_string() + ";\n" );
      }
      else if ( v.is_object() )
      {
        s += std::string( "struct T_" + name + " {\n" + create( v ) + " \n} __attribute__( ( packed ) );" );
        // instance flag:
        // true => a real instance
        // false => "extern" instance
        if ( instance )
        {
          s += std::string( "const T_" + name + "  " + name + ";\n" );
        }
        else
        {
          // in your case, it's necessary only for header struct
          s += std::string( "extern const T_" + name + "  " + name + ";\n" );
        }
      }
    }
  return s;
}

//=============================================================
// create C++ struct with all values of json file
// This Structure is devoted to internal RAM only Writable values
//=============================================================
inline std::string internal_ram_struct( jsoncons::json j, bool instance = true )
{
  std::string s;
  if ( j.is<jsoncons::json::object>() )
    for ( const auto& kv : j.object_range() )
    {
      std::string name( kv.key() );

      // if within key there are spaces -> change to "_"
      std::transform( name.begin(), name.end(), name.begin(), []( char ch ) { return ch == ' ' ? '_' : ch; } );
      jsoncons::json v = kv.value();
      if ( v.has_key( "w_value" ) )
      {
        s += std::string( "struct T_" + name + " {\n" );
        auto value = v[ "w_value" ];
        auto data_type = v[ "T" ].as_string();
        if ( value.is_array() )
        {
          auto a = value.as<std::vector<std::string>>();
          std::stringstream ss;
          ss << a.size();
          std::string size( ss.str() );
          s += std::string( data_type + " w_value[" + size + "];\n" );
        }
        else
        {
          s += std::string( data_type + " w_value;\n" );
        }
        s += std::string( "} __attribute__( ( packed ) );\n" );
        s += std::string( "T_" + name + "  " + name + ";\n" );
      }
      else if ( v.is<jsoncons::json::object>() )
      {
        s += std::string( "struct T_" + name + " { " + internal_ram_struct( v ) + " } __attribute__( ( packed ) );" );

        // instance flag:
        // true => a real instance
        // false => "extern" instance
        if ( instance )
        {
          s += std::string( "T_" + name + "  " + name + ";\n" );
        }
        else
        {
          s += std::string( "extern T_" + name + "  " + name + ";\n" );
        };
      }
    }
  return s;
}

std::vector<std::string> split( std::string const& input )
{
  std::istringstream buffer( input );
  std::vector<std::string> ret;
  std::copy( std::istream_iterator<std::string>( buffer ), std::istream_iterator<std::string>(),
             std::back_inserter( ret ) );

  return ret;
}

inline jsoncons::json const add_j( std::string const& s, jsoncons::json j )
{
  jsoncons::json w;
  w[ s ] = std::move( j );
  return w;
}

jsoncons::json const new_j( std::string const& s )
{
  auto t( s );
  std::transform( t.begin(), t.end(), t.begin(), []( char ch ) { return ch == '/' ? ' ' : ch; } );
  auto a = split( t );
  std::reverse( a.begin(), a.end() );
  jsoncons::json o;
  for ( auto const& v : a )
  {
    o = add_j( v, o );
    //jsoncons::json w;
    //w[ v ] = std::move( o );
    //o = w;
    //r += std::string( "/" + v );
    //std::cout << r << std::endl;
  }
  return o;
}

jsoncons::json const merge( jsoncons::json a, jsoncons::json b )
{
  if ( ( a.is<jsoncons::json::object>() ) && ( b.is<jsoncons::json::object>() ) )

    for ( const auto& bkv : b.object_range() )
    {
      std::string b_key( bkv.key() );
      jsoncons::json v = bkv.value();
      // if A does not have object B -> merge
      if ( a.has_key( b_key ) == false )
      {
        a.merge( std::move( b ) );
        return a;
      }
      //add new json to a only if A does not contain B
      a[ b_key ] = merge( a[ b_key ], b[ b_key ] );
    }
  return a;
}

int main( int argc, char* argv[] )
{
  std::ifstream ifs( "i.json" );
  jsoncons::json lpm_json;
  if ( ifs.good() )
  {
    ifs >> lpm_json;
  }
  else
  {
    std::cout << "Can't find 'i.json' " << std::endl;
  }

  {
    std::ofstream ofs( "o.json" );
    ofs << jsoncons::pretty_print( lpm_json );
    ofs.close();
  }

  // header content
  std::string header_content(
      std::string( "#ifndef LPM_PARAMETERS_\n #define LPM_PARAMETERS_\n namespace Firmware {\n namespace System  {\n "
                   "namespace Parameters  {\n " ) );

  auto j = strings( lpm_json, header_content );
  {
    std::ofstream ofs( "j.json" );
    ofs << jsoncons::pretty_print( j );
    ofs.close();
  }

  // ej is eventual json object
  // to build flash structure
  jsoncons::json ej;

  // create writable json
  {
    // o - json object to be converted in C++ struct for ram
    jsoncons::json o;
    {
      TSearchByKeyValue sn( "access", "W" );

      // find all jsonpointers to "access":"W"
      sn.f( j, std::string( "/" ) );
      // sn.get() - return std::vector<std::string> with all jsonpointers
      // this loop is over all jsonpointers
      for ( auto const& value : sn.get() )
      {
        std::string v( value );
        std::string s( "/access" );
        v.erase( v.end() - s.size(), v.end() );
        o = merge( o, new_j( v ) );
        //std::cout << "json: " << v << std::endl;
        //std::cout << "(1) " << jsoncons::jsonpointer::contains( j, v ) << std::endl;
        auto l = jsoncons::jsonpointer::get( j, std::string( v + "/value" ) );
        jsoncons::jsonpointer::insert( o, std::string( v + "/w_value" ), l );
        auto data_t = jsoncons::jsonpointer::get( j, std::string( v + "/T" ) );
        jsoncons::jsonpointer::insert( o, std::string( v + "/T" ), data_t );
      }
    }

    jsoncons::json u;
    // rename top level name, because of duplicate name in C++
    // for writing structure
    ej = merge( j, o );
    u[ "wparameters" ] = std::move( o[ "parameters" ] );

    std::ofstream o_json( "ram.json" );
    if ( o_json.is_open() == false )
    {
      std::cout << "file open failed:"
                << "ram.json" << std::endl;
    }
    o_json << jsoncons::pretty_print( u );
    o_json.close();

    header_content += internal_ram_struct( u, false );

    //std::cout << "json: " << jsoncons::pretty_print( o ) << std::endl;
    //jsoncons::jsonpointer::insert( o, r, jsoncons::json( "1" ) );

    {
      TSearchByKey se( "w_value" );
      se.f( u[ "wparameters" ], std::string( "/" ) );
      for ( auto const& value : se.get() )
      {
        std::string s( value );
        std::transform( s.begin(), s.end(), s.begin(), []( char ch ) { return ch == '/' ? '.' : ch; } );
        jsoncons::json address;
        jsoncons::json b = ej[ "parameters" ];
        jsoncons::json old = jsoncons::jsonpointer::get( b, std::string( value ) );
        if ( old.is_array() )
        {
          address = jsoncons::json( std::string( "wparameters" + s ) );
        }
        else
        {
          address = jsoncons::json( std::string( "&wparameters" + s ) );
        }
        jsoncons::jsonpointer::replace( b, std::string( value ), address );
        ej[ "parameters" ] = std::move( b );
      }
    }
  }

  header_content += create( ej, false );

  /*{
    TSearchByKey sn( "access" );
    sn.f( j, std::string( "/" ) );
    for ( auto const& value : sn.get() )
    {
      //std::cout << value << std::endl;
    }
  }

  {
    TSearchByKey sn( "value" );
    sn.f( j, std::string( "/" ) );
    for ( auto const& value : sn.get() )
    {
      //std::cout << value << std::endl;
    }
  }*/

  {
    header_content += std::string( "}}}\n #endif" );
    std::ofstream o( "p.hpp" );
    if ( o.is_open() == false )
    {
      std::cout << "file open failed:"
                << "p.hpp" << std::endl;
    }
    o << header_content;
    o.close();

    // TODO: This must written as C++ Clang library function call
    system( "\"C:\\Program Files\\LLVM\\bin\\clang-format.exe\" p.hpp > Parameters.hpp" );
    //clang::format::format( "p.hpp" );
  }
}
