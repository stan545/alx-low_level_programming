#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - This function calculats the length of an inputted string
 * @arr: an inputted string
 *Return: Returns the count of characters in the string
 */
int _strlen(char *arr)
{
	int i;

	for (i = 0; arr[i] != '\0'; i++)
	return (i);

	return (i);
}
/**
 * _strcpy - copies a string pointed to by src to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: destinnation string
 * Return: A poniter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, size;

	for (size = 0; src[size] != '\0'; size++)
	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - a funtion that creates a new string
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner's name
 * Return: for success case - function returns a pointer
 *to new dog.
 * otherwise - return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int nameLen, ownerLen;

	nameLen = _strlen(name);
	ownerLen = _strlen(owner);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	(*new).name  = malloc(sizeof(char) * (nameLen + 1));
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).owner  = malloc(sizeof(char) * (ownerLen + 1));
	if ((*new).owner == NULL)
	{
		free(new);
		free((*new).name);
		return (NULL);
	}

	_strcpy((*new).name, name);
	_strcpy((*new).owner, owner);
	(*new).age = age;

	return (new);
}
