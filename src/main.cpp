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
#include <list>
#include <functional>
#include <memory>
#include <utility>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/jsonpointer/jsonpointer.hpp>

#include <tclap/CmdLine.h>

bool NextSet( std::vector<int>& a, int const& n, int const& m )
{
  int k = m;
  for ( int i = k - 1; i >= 0; --i )
    if ( a[ i ] < n - k + i )
    {
      ++a[ i ];
      for ( int j = i + 1; j < k; ++j )
        a[ j ] = a[ j - 1 ] + 1;
      return true;
    }
  return false;
}

int main( int argc, char* argv[] )
{
  jsoncons::ojson lpm_json;
  std::string name_of_diode;
  uint32_t id;
  try
  {
    TCLAP::CmdLine cmd( "application producing parameters", ' ', "0.1" );
    TCLAP::ValueArg<std::string> input_file_Arg( "i", "input", "Input file", true, "input.json", "string" );
    cmd.add( input_file_Arg );
    cmd.parse( argc, argv );
    const std::string infile( input_file_Arg.getValue() );
    std::ifstream ifs( infile );

    if ( ifs.good() )
    {
      ifs >> lpm_json;
    }
    else
    {
      std::cout << "Can't find \"" << infile << "\"" << std::endl;
    }

    jsoncons::ojson options = lpm_json[ "options" ];
    name_of_diode = options[ "diode_name" ].as_string();
    id = options[ "i" ].as_uint();
    std::ofstream ofs( options[ "json" ].get_with_default( "input_pretty_output", "o.json" ) );
    ofs << jsoncons::pretty_print( lpm_json );
    lpm_json.erase( "options" );
    ofs.close();
  }
  catch ( TCLAP::ArgException& e )  // catch any exceptions
  {
    std::cerr << "error: " << e.error() << " for alsrg " << e.argId() << std::endl;
  }
  jsoncons::ojson jdiodes = jsoncons::ojson::array();
  for ( auto j : lpm_json[ "diodes" ][ name_of_diode ].object_range() )
  {
    jsoncons::ojson& diode = j.value();
    jsoncons::ojson jarray = jsoncons::ojson::array();
    for ( auto voltages : diode.object_range() )
    {
      double avarge_value = 0.0f;
      for ( auto voltage_on_diode : voltages.value().array_range() )
      {
        avarge_value += voltage_on_diode.as_double();
      }
      avarge_value /= static_cast<double>( voltages.value().size() );
      jarray.push_back( avarge_value );
    }
    jsoncons::ojson t = jsoncons::ojson::object();
    t[ j.key() ] = std::move( jarray );
    jdiodes.push_back( t );
  }

  int n = jdiodes.size();
  int m = 4;
  std::vector<int> a;
  for ( int i = 0; i < n; i++ )
    a.push_back( i );

  jsoncons::ojson jcombination = jsoncons::ojson::array();

  do
  {
    jsoncons::ojson b = jsoncons::ojson::array();
    b.push_back( jdiodes[ a[ 0 ] ] );
    b.push_back( jdiodes[ a[ 1 ] ] );
    b.push_back( jdiodes[ a[ 2 ] ] );
    b.push_back( jdiodes[ a[ 3 ] ] );
    jsoncons::ojson d = jsoncons::ojson::object();
    d[ "diodes" ] = b;
    jcombination.push_back( d );
  } while ( NextSet( a, n, m ) );

  for ( auto& pair : jcombination.array_range() )
  {
    double x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3;

    for ( auto voltages : pair[ "diodes" ][ 0 ].object_range() )
    {
      x0 = voltages.value()[ 0 ].as_double();
      y0 = voltages.value()[ 1 ].as_double();
      z0 = voltages.value()[ 2 ].as_double();
    }
    for ( auto voltages : pair[ "diodes" ][ 1 ].object_range() )
    {
      x1 = voltages.value()[ 0 ].as_double();
      y1 = voltages.value()[ 1 ].as_double();
      z1 = voltages.value()[ 2 ].as_double();
    }
    for ( auto voltages : pair[ "diodes" ][ 2 ].object_range() )
    {
      x2 = voltages.value()[ 0 ].as_double();
      y2 = voltages.value()[ 1 ].as_double();
      z2 = voltages.value()[ 2 ].as_double();
    }
    for ( auto voltages : pair[ "diodes" ][ 3 ].object_range() )
    {
      x3 = voltages.value()[ 0 ].as_double();
      y3 = voltages.value()[ 1 ].as_double();
      z3 = voltages.value()[ 2 ].as_double();
    }
    double d01 = sqrt( ( x0 - x1 ) * ( x0 - x1 ) + ( y0 - y1 ) * ( y0 - y1 ) + ( z0 - z1 ) * ( z0 - z1 ) );
    double d12 = sqrt( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) + ( z1 - z2 ) * ( z1 - z2 ) );
    double d23 = sqrt( ( x2 - x3 ) * ( x2 - x3 ) + ( y2 - y3 ) * ( y2 - y3 ) + ( z2 - z3 ) * ( z2 - z3 ) );
    double d30 = sqrt( ( x3 - x0 ) * ( x3 - x0 ) + ( y3 - y0 ) * ( y3 - y0 ) + ( z3 - z0 ) * ( z3 - z0 ) );

    pair[ "distance" ] = d01 + d12 + d23 + d30;
  }
  std::sort( jcombination.array_range().begin(), jcombination.array_range().end(),
             []( jsoncons::ojson a, jsoncons::ojson b ) -> bool {
               return ( a[ "distance" ].as_double() < b[ "distance" ].as_double() );
             } );
  jsoncons::ojson j = jcombination[ id ];
  std::cout << pretty_print( j ) << std::endl;
}
