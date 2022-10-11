#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Define a new struct type dog.
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
