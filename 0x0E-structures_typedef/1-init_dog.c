#include "dog.h"
#include <stddef.h>

/**
 * init_dog - iniliaize
 * @d: 1 mem
 * @name: 2 mem
 * @age: 3 mem
 * @owner: 4 mem
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
