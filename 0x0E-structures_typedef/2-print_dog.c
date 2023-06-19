#include "dog.h"
#include <stdio.h>

/**
* print_dog - print struct function
* @d: a struct variable
* Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("nill");
		printf("%s\n", d->name);
		printf("Age: ");
		if (d->age < 0)
			printf("nill");
		printf("%f\n", d->age);
		 printf("Owner: ");
		if (d->owner == NULL)
			printf("nill");
		printf("%s\n", d->owner);
	}
		return;
}
