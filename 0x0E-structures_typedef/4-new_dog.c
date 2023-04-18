#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new dog - a function creates a new variable from the previous struct
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
user->name = name;
user->age = age;
user->owner = owner;
return (user);



}
