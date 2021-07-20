#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialize a struct dog
 * @d: Dog struct
 * @name: Dog name
 * @age: age of the dog
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
