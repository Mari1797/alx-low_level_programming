#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Defines a struct dog
 * @age: Age of dog
 * @name: Name of dog
 * @owner: Owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
