#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: malloced dog_t OR NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int index;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (index = 0; name[index]; index++)
	{
	}
	new_dog->name = malloc(sizeof(char) * (index + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (index = 0; name[index]; index++)
		new_dog->name[index] = name[index];
	for (index = 0; owner[index]; index++)
	{
	}
	new_dog->owner = malloc(sizeof(char) * (index + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (index = 0; owner[index]; index++)
		new_dog->owner[index] = owner[index];
	new_dog->age = age;
	return (new_dog);
}
