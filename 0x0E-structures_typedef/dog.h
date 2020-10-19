#ifndef DOG_H
#define DOG_H

/**
 * struct dog - outlines attributes of a dog
 * @name: char pointer to the name of the dog
 * @age: the age of the dog (float type)
 * @owner: char pointer to the name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
