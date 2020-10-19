#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: char pointer to name of dog
 * @age: age of dog (float type)
 * @owner: char pointer to name of dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameLen = 0, ownerLen = 0, i = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	while (name[nameLen] != '\0')
		++nameLen;

	dog->name = malloc(sizeof(char) * nameLen + 1);
	if (dog->name == NULL)
		return (NULL);
	for (i = 0; i <= nameLen; ++i)
		dog->name[i] = name[i];

	while (owner[ownerLen] != '\0')
		++ownerLen;

	dog->owner = malloc(sizeof(char) * ownerLen + 1);
	if (dog->owner == NULL)
		return (NULL);
	for (i = 0; i <= ownerLen; ++i)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
