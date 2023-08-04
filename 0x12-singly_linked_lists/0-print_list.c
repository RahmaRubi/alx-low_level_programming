#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t i;
	i = 0;
	while(h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);

}
