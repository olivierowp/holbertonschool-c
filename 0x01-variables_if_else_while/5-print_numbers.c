#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		printf("%d", d);
	}
	printf("\n");
	return (0);
}
