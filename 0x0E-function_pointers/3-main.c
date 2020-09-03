#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - execute the calculate
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*calcul)(int, int);

	if (argc != 4)
	{
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	calcul = get_op_func(argv[2]);
	if (calcul == NULL)
	{
		printf("Error!\n");
		exit(99);
	}
	result = calcul(a, b);
	printf("%i\n", result);
	return (0);
}
