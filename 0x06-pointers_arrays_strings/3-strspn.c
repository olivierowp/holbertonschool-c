#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: number to bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i;
	int found = 1;

	while (found && *s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			found = 0;
			if (*s == accept[i])
			{
				found = 1;
				res++;
				break;
			}
		}
		s++;
	}
	return res;
}
