#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - A dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A dog struct with three parameters
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
