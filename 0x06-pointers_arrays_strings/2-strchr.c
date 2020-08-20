#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: target char
 * Return: pointer to first occurrence of c or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	char x;

	while(1) 
	{
		x = *s;
		if( x == c)
		{
			return s;
		}
		s++;
	}
	return (NULL);
}
