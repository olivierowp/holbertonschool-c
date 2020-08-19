#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * rev_string - reverses a string
 * @s: string s
 */
void rev_string(char *s)
{
	int size = _strlen(s);
	char tmp;
	char *beg = s, *end = s;

	end += size - 1;
	while (beg < end)
	{
		tmp = *beg;
		*beg = *end;
		*end = tmp;
		beg++;
		end--;
	}
}
