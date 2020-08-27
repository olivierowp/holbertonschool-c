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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: copied string OR NULL
 */
char *_strdup(char *str)
{
	int i, len;
	char *clone;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	clone = malloc(sizeof(char) * (len + 1));
	if (clone == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		clone[i] = str[i];
	}
	return (clone);
}
