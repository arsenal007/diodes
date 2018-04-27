/*
 * search_strings.h
 *
 *  Created on: 24.04.2018
 *      Author: vkuzmenko
 */

#ifndef SEARCH_STRINGS_H_
#define SEARCH_STRINGS_H_

class TPointersStrings
{
  std::vector<std::string> pointers;

 public:
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
        if ( name == "name" )
        {
          s = str + name;
          pointers.push_back( s );
        }
        else if ( v.is<jsoncons::json::object>() )
        {
          s = f( v, sn );
        }
      }
    return s;
  }
  auto const& get( void )
  {
    return pointers;
  }
};

#endif /* SEARCH_STRINGS_H_ */
