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
	char *n, *o;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog || !name || !owner)
		return (NULL);
	n = malloc(_strlen(name) + 1);
	if (!n)
		return (free(new_dog), NULL);
	n = _strdup(name);
	new_dog->name = n;
	o = malloc(_strlen(owner) + 1);
	if (!o)
		return (free(new_dog->name), free(new_dog), NULL);
	o = _strdup(owner);
	new_dog->owner = o;
	new_dog->age = age;
	return (new_dog);
}
