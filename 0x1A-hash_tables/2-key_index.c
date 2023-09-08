#include "hash_tables.h"
/**
 * key_index - function to calculate key index
 * @key: key string
 * @size: size of the hash table
 * Return: null or key_index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, key_index;
	hash_value = hash_djb2(key);
	key_index = hash_value % size;
	return (key_index);

}
