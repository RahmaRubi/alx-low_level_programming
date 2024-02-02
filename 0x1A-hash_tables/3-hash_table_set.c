#include "hash_tables.h"
/**
 * hash_table_set - setting or updating an item
 * @ht: intended table
 * @key: key assosiated with index
 * @value: value to a crossponding to a key
 * Return: 0 in case failue, 1 in success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node, *head;


if (!ht || ht->size == 0 || !ht->array || !key || strlen(key) == 0 || !value)
	return (0);
index = key_index((const unsigned char *)key, ht->size);
head = ht->array[index];
while (head)
{
	if (strcmp(head->key, key) == 0)
	{
		free(head->value);
		head->value = strdup(value);
	if (!head->value)
		return (0);
	return (1);
	}

head = head->next;
}
node = malloc(sizeof(hash_node_t));
if (!node)
	return (0);
node->key = strdup(key);
if (!node->key)
	return (1);
node->value = strdup(value);
if (!node->value)
	return (1);
node->next = ht->array[index];
ht->array[index] = node;
return (1);

