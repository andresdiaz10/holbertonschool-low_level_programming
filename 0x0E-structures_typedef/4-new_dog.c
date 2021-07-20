#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_size - Calculate the size of str
 * @str: String
 *
 * Return: The size of the array
 */

int string_size(char *str)
{
	size_t i;
	size_t size_str = 1;

	for (i = 0 ; *(str + i) != '\0' ; i++)
		size_str++;
	return (size_str);
}

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
	int i;

	if (name == NULL || age < 0.0 || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	(*my_dog).name = malloc(string_size(name));
	(*my_dog).owner = malloc(string_size(owner));
	if ((*my_dog).name == NULL || (*my_dog).owner == NULL)
	{
		free((*my_dog).name);
		free((*my_dog).owner);
		free(my_dog);
		return (NULL);
	}
	for (i = 0 ; i < string_size(name) ; i++)
		(*my_dog).name[i] = name[i];
	for (i = 0 ; i < string_size(owner) ; i++)
		(*my_dog).owner[i] = owner[i];
	(*my_dog).age = age;
	return (my_dog);
}
