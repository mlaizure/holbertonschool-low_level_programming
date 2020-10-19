#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees struct dogs
 * @d: pointer to struct dog
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
