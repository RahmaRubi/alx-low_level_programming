#include "lists.h"
/**
 * print_dlistint - doubly linked list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n",temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
