#include "lists.h"
void free_list(list_t *head)
{
	list_t *temp;
	temp = head;
	while (temp->next)
	{
		free(head->next);
		free(head);
		temp = temp->next;
		head = temp;
	}
	free(temp->next);
	free(temp);



}
