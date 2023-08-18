#include "lists.h"
/**
 * dlistint_len - doubly linked list 
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t i = 0;
	dlistint_t *temp;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
