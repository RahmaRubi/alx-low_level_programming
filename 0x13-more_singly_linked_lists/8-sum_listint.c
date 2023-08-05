#include "main.h"
int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *temp;
	
	sum = 0;
	temp = head;
	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);


}
