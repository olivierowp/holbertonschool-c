#include <stdlib.h>
#include "holberton.h"

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
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, index;
	char *array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	size = 0;
	for (i = 0; i < ac; i++)
	{
		size += (_strlen(av[i]) + 1);
	}

	array = malloc(sizeof(char) * size + 1);
	if (array == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		size = _strlen(av[i]);
		for (j = 0; j < size; j++, index++)
		{
			array[index] = av[i][j];
		}
		array[index++] = '\n';
	}
	array[index] = '\0';
	return (array);
}
