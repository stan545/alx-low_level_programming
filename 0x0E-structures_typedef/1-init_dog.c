#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - This fuction initializess a varible of type struct dog
 * @d: a pointer to a struct dog
 * @name: name to be initiialized
 * @age: The age to be initialized
 * @owner: the owner's name to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
