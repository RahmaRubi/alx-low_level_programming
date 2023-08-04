#include "lists.h"
/**
 * add_node_end - add a node at the end
 * @head: head pointer
 * @str: string
 * Return: tail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *tail, *temp;

	i = 0;
	temp = *head;
	tail = (list_t *) malloc(sizeof(list_t));
	if (!tail)
		return (NULL);
	while (str[i])
		i++;
	if ((!*head))
	{
		*head = tail;
		return (tail);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = tail;
	tail->next = NULL;
	tail->len = i;
	tail->str = strdup(str);
	return (tail);



}
