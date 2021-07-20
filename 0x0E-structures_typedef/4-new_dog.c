#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Create a new dog struct
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;

	if (name == NULL || age < 0.0 || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t) + 1);
	if (my_dog == NULL)
		return (NULL);
	(*my_dog).name = strdup(name);
	(*my_dog).owner = strdup(owner);
	if ((*my_dog).name == NULL || (*my_dog).owner == NULL)
		return (NULL);
	(*my_dog).age = age;
	return (my_dog);
}
