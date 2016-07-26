/******************************************************************************/
/**
@file
@author		Dana Klamut
@brief		The C++ implementation of a flat file dictionary.
*/
/******************************************************************************/

#if !defined(PROJECT_FLATFILE_H)
#define PROJECT_FLATFILE_H

#include "Dictionary.h"
#include "../key_value/kv_system.h"
#include "../dictionary/flat_file/flat_file_dictionary_handler.h"

template<typename K, typename V>
class FlatFile:public Dictionary<K, V> {
public:
/**
@brief		Registers a specific flat file dictionary instance.

@details	Registers functions for dictionary.

@param		type_key
				The type of keys to be stored in the dictionary.
@param		key_size
				The size of keys to be stored in the dictionary.
@param	  value_size
				The size of the values to be stored in the dictionary.
*/
FlatFile(
	ion_key_type_t	type_key,
	int				key_size,
	int				value_size
) {
	ffdict_init(&this->handler);

	this->initializeDictionary(type_key, key_size, value_size, 0);
}
};

#endif /* PROJECT_FLATFILE_H */
