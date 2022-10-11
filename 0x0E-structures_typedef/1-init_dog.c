#ifndef _INIT_H
#define _INIT_H

/**
 * init_dog - Initializes a variable struct dog
 * @age: Dog's age
 * @name: Dog's name
 * @owner: Dog's owner
 * @d: dog structure
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#endif
