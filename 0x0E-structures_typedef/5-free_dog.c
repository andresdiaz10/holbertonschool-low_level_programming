#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory in the struct dog
 * @d: Struct dog
 */

void free_dog(dog_t *d)
{
	if (!(d))
	{
	free((*d).name);
	free((*d).owner);
	free(d);
	}
}
