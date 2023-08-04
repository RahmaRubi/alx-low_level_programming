#include "lists.h"
/**
 * list_len - len of a list
 * @h: head
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);


}
