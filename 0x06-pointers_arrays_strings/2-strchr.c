#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: target char
 * Return: pointer to first occurrence of c or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return ptr;
		}
		ptr++;
	}
	return NULL;
}
