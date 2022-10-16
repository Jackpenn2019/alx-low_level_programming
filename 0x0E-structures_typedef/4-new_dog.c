#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of a string
 * @str: input string
 *
 * Return: int
 */
int _strlen(char *str)
{
	int length = 0, index = 0;

	while (str[index] != '\0')
	{
		index++;
		length++;
	}

	return (length);
}

/**
 * _strcopy - copies string from src to dest
 * @dest: destination address
 * @src: source address
 *
 * Return: pointer to copied string
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index + 1] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who owns the dog
 *
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	_strcopy(ptr->name, name);
	ptr->age = age;
	_strcopy(ptr->owner, owner);

	return (ptr);
}




