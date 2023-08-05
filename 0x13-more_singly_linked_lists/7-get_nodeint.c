#include "lists.h"
/**
 * get_nodeint_at_index - get nth node
 * @head: head pointer
 * @index: desired index
 * Return: desired node
 */ 
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	
	temp = head;
	i = 0;	
	if (!head)
		return (NULL);
	while (i != index && temp)
	{
		temp = temp->next;
		i++;	
	}
	if (i == index)
		return (temp);
	return(NULL);
}
