#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int d;
	int i;
	int first;

	first = 1;
	for (d = 48; d < 58; d++)
	{
		for (i = 48; i < 58; i++)
		{
			if (first == 1)
			{
				first = 0;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			putchar(d);
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
