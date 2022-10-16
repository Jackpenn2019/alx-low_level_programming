#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of
 * struct dog
 * @d: pointer to a location containing
 * variable of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

	return;
}
