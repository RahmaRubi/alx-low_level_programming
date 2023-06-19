#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the name
 * @name: 1 member
 * @age: 2 member
 * @owner: 3 member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
