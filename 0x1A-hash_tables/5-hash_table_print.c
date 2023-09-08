#include "hash_tables.h"
/**
 * hash_table_print - print function
 * @ht: our hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int printed;
	unsigned long int i;
	hash_node_t *current;

	printed = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			printed = 1;
			current = current->next;
		}
	}
	printf("}\n");

}
