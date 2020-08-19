#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @c: String
 * Return: string that is encoded
 */
char *leet(char *c)
{
	int i;
	char *leet = "ol2ea56t89OL2EA56T";
	char *ptr = c;

	while (*c)
	{
		for (i = 0; i < 18; i++)
		{
			if (*c == leet[i])
				*c = (i % 10) + 48;
		}
		c++;
	}
	return (ptr);
}
