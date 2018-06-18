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
  uint32_t id, Nc;
  int m;
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
    Nc = options[ "number_of_currents" ].as_uint();
    id = options[ "i" ].as_uint();
    m = options[ "M" ].as_int();
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
    for ( auto currents : diode.object_range() )
    {
      double avarge_value = 0.0f;
      for ( auto voltage_on_diode : currents.value().array_range() )
      {
        avarge_value += voltage_on_diode.as_double();
      }
      avarge_value /= static_cast<double>( currents.value().size() );
      jarray.push_back( avarge_value );
    }
    jsoncons::ojson t = jsoncons::ojson::object();
    t[ j.key() ] = std::move( jarray );
    jdiodes.push_back( t );
  }

  int n = jdiodes.size();
  std::vector<int> a;
  for ( int i = 0; i < n; i++ )
    a.push_back( i );

  jsoncons::ojson jcombination = jsoncons::ojson::array();

  do
  {
    jsoncons::ojson b = jsoncons::ojson::array();
    for ( int i = 0; i < m; i++ )
      b.push_back( jdiodes[ a[ i ] ] );
    jsoncons::ojson d = jsoncons::ojson::object();
    d[ "diodes" ] = b;
    jcombination.push_back( d );
  } while ( NextSet( a, n, m ) );

  // loop over various diodes set
  for ( auto& pair : jcombination.array_range() )
  {
    double s = 0;
    //loop inside a set over diodes
    for ( int i = 0; i < m; i++ )
    {
      // loop over currents
      for ( size_t j = 0; j < Nc; j++ )
      {
        double c0, c1;
        //this loop is for elimination diode name. it's goes from 0 to 1;
        for ( auto voltages : pair[ "diodes" ][ i ].object_range() )
          c0 = voltages.value()[ j ].as_double();

        int k = i + 1;
        if ( k == m ) k = 0;

        //this loop is for elimination diode name. it's goes from 0 to 1;
        for ( auto voltages : pair[ "diodes" ][ k ].object_range() )
          c1 = voltages.value()[ j ].as_double();

        s += ( c0 - c1 ) * ( c0 - c1 );
      }
    }
    pair[ "distance" ] = sqrt( s );
  }
  std::sort( jcombination.array_range().begin(), jcombination.array_range().end(),
             []( jsoncons::ojson a, jsoncons::ojson b ) -> bool {
               return ( a[ "distance" ].as_double() < b[ "distance" ].as_double() );
             } );
  {
    jsoncons::ojson j = jcombination[ id ];
    std::cout << pretty_print( j ) << std::endl;
  }
}
