#ifndef DOG_H_
#define DOG_H_
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

typedef dog dog_t;
dog_t *new_Bud(char *name, int age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif
