#include "hash_tables.h"
/**
 * key_index - key index generator
 * @key: key
 * @size: size of table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);



}
