/*
 * str_key_value_pair.h
 *
 *  Created on: 25.04.2018
 *      Author: vkuzmenko
 */

#ifndef STR_KEY_VALUE_PAIR_H_
#define STR_KEY_VALUE_PAIR_H_

struct TStr_key_value_pair
{
  std::string key;
  std::string value;
  TStr_key_value_pair( std::string const& key_, std::string const& value_ ) : key( key_ ), value( value_ ) {}
};

#endif /* STR_KEY_VALUE_PAIR_H_ */
