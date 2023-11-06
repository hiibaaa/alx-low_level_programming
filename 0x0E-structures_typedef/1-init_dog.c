#include "dog.h"

/**
 * init dog - initialize dog
 * @d: the dog to init.
 * @name: the name of the dog.
 * @age: age of the dog.
 * @owner: dog's owner.
 *
 * return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
