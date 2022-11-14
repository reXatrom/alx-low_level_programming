#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int an, am, x;

	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (an = 0; name[an]; an++)
		;
	an++;
	dog->name = malloc(an * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < an; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (am = 0; owner[am]; am++)
		;
	am++;
	dog->owner = malloc(am * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < am; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
