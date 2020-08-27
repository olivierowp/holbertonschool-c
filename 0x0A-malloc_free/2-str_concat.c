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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings OR empty string
 */
char *str_concat(char *s1, char *s2)
{
	char *empty = "";
	int s1len, s2len;
	int i, j;
	char *result;

	if (s1 == NULL)
	{
		return (empty);
	}
	if (s2 == NULL)
	{
		return (empty);
	}

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	result = malloc(sizeof(char) * (s1len + s2len + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1len; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j <= s2len; j++, i++)
	{
		result[i] = s2[j];
	}
	return (result);
}
