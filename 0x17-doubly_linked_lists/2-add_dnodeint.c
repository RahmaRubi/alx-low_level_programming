#include "lists.h"
/**
 * add_dnodeint - add z start node
 * @head: two pinter to the first node
 * @n: data node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (malloc(sizeof(dlistint_t)));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);

}
