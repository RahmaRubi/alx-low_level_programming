#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function creates a new variable from the previous struct
 * @name: firsty passing paramter
 * @age: second from type float
 * @owner: third
 * Return: returns null if the user is null because of full heap
 * else returns the pointer user from the type struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *user;
user = malloc(sizeof(dog_t));
if (user == NULL)
	return (NULL);
user->name = malloc(strlen(name) + 1);
if (user->name == NULL)
free(user->name);
strcpy(user->name, name);
user->age = age;
user->owner = malloc(strlen(owner) + 1);
if (user->owner == NULL)
free(user->owner);
strcpy(user->owner, owner);
return (user);


}
