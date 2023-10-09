#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free instance of struct dog
 * @d: instance of dog to be freed
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}

