#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase.
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
