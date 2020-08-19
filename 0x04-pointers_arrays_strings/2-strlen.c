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
