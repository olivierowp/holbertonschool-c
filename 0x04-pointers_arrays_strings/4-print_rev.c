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
 * print_rev - prints a string in reverse
 * @s: string s
 */
void print_rev(char *s)
{
	int size = _strlen(s);

	while (size-- > 0)
	{
		_putchar(*(s + size));
	}
	_putchar('\n');
}
