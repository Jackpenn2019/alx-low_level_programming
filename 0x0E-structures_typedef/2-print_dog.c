#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: input pointer to a dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d->name == NULL)
	{
		name = "nil";
	}
	else name = d->name;

	if (d->owner == NULL)
	{
		owner = "nil";
	}
	else
		owner = d->owner;
	age = d->age;

	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}


