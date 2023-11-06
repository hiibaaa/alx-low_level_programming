#include "dog.h"
#include <stdlib.h>

/**
* free_dog - free allocated memory for struct dog.
* @d: struct to free
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free (d);
	}
}
