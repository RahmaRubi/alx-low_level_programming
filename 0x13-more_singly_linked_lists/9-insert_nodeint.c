#include "main.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	i = 0;
	temp = *head;
	if (!head || !(*head))
		return (NULL);
	while (i < idx && temp)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	new = (listint_t *) malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (i == 0)
	{
		new->next = head;
		*head = new;
		new->n = n;
	}

	new = temp;
	new->next = temp;





}
