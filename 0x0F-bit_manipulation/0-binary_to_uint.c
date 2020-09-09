#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 * Return: unsigned decimal conversion of input is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (is_binary(*b) == 0)
		{
			return (0);
		}
		result = (result * 2) + (*b - '0');
		b++;
	}
	return (result);
}

/**
 * is_binary - checks if char is binary
 * @c: char
 * Return: bool
 */
_Bool is_binary(char c)
{
	if (c == '1' || c == '0')
		return (1);
	return (0);
}
