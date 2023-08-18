#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *temp;

	end = malloc(sizeof(dlistint_t));
	if (!end)
		return (NULL);
	temp = *head;
	end->n = n;
	end->prev = NULL;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;
	end->prev = temp;
	end->next = NULL;
	return (*head);

}
