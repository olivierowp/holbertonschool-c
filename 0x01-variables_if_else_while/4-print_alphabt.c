#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabet in lowercase without e and q
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
		{
			continue;
		}
		putchar(l);
	}
	putchar('\n');

	return (0);
}
