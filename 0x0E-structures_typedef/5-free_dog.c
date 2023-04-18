#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees variable d from type struct
 * @d: the only one pramter which is a pointer from the stype struct
 */

void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);

}

}
