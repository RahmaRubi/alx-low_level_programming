#include "hash_tables.h"
/**
 * hash_table_create - creation function
 * @size: size of buckets of each key value pair
 * Return: return pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;
	unsigned long int i;

	i = 0;
	my_table = malloc(sizeof(hash_table_t));
	if (size <= 0 || my_table == NULL)
		return (NULL);
	my_table->array = malloc(sizeof(my_table) * size);
	if (my_table == NULL)
	{
		free(my_table);
		return (NULL);
	}
	my_table->size = size;
	for (i = 0; i < size; i++)
		my_table->array[i] = NULL;
	return (my_table);


}
