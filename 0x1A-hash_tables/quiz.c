#include "hash_tables.h"
/**
 * hash_table_create - creation function
 * @size: size of buckets of each key value pair
 * Return: return pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;
	new_table = NULL;
	new_table = malloc(sizeof(new_table));
	if (size == 0 || new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(new_table) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	for (i = 0; i < size; i++)
		new_table->array [i] = NULL;
	return (new_table);

}
