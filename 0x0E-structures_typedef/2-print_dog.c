#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print the value of dog struct
 * @d: Dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		if ((*d).age <  0.0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
