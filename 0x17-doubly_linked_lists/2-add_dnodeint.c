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
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	return (new);

}
