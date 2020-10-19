#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to the struct
 * @name: char pointer to the name of the dog
 * @age: age of dog (float type)
 * @owner: character pointer to the name of the owner of the dog
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
