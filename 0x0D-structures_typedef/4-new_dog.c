#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		s++;
	}

	return (s - start);
}

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (ptr);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: copied string OR NULL
 */
char *_strdup(char *str)
{
	int len;
	void *new;

	len = _strlen(str) + 1;
	new = malloc(sizeof(char) * len);

	if (new == NULL)
		return (NULL);

	return _memcpy(new, str, len);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: malloced dog_t OR NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)		
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
