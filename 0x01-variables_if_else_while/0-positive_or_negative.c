#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether the number is positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;
	char *result;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		result = "negative";
	}
	else if (n > 0)
	{
		result = "positive";
	}
	else
	{
		result = "zero";
	}
	printf("%d is %s\n", n, result);
	return (0);
}
