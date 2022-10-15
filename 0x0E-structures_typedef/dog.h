#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * struct dog - Dog attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dogs owner
 *
 * Description: the attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif
