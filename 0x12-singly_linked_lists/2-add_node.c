#include "lists.h"
/**
 * add_node - addn= node in first
 * @head: head pointer
 * @str: string
 * Return: newnode address
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;

	i = 0;
	new = (list_t *) malloc(sizeof(list_t));

	while (str[i])
		i++;
	if (!new)
		return (NULL);
	new->len = i;
	new->str = strdup(str);
	new->next = *(head);
	(*head) = new;
	return (*head);





}
