#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function intilizes a structure
 * @d: first
 * @name: second paramter
 * @age: third
 * @owner: fourth
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;

}
