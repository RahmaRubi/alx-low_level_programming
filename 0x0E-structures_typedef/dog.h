#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure compoed from 3 members
 * @name: first member
 * @age: econd
 * @owner: third one
 * Description: hello world
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
