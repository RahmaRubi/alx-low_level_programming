#include "lists.h"
/**
 * free_list - free function
 * @head: head
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		free(head->str);
		free(head);
		temp = temp->next;
		head = temp;
	}
}
