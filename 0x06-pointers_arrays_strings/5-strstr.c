#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *x;
	char *y;

	if (!*needle)
	{
		return (haystack);
	}

	y = needle;
	for (; *haystack != 0; haystack++)
	{
		if (*haystack != *y)
		{

			continue;
		}
		x = haystack;
		while (1)
		{
			if (!*y)
			{
				return (haystack);
			}
			if (*x != *y)
			{
				break;
			}
			x++;
			y++;
		}
		y = needle;
		haystack++;
	}
	return (NULL);
}
