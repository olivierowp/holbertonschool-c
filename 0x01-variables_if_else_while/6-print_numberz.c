#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all single digit numbers with putchar
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
