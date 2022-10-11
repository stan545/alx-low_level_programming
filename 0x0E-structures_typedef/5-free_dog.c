#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A funtion that frees a struct
 * @d: a pointer to the struct that is supposed to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
