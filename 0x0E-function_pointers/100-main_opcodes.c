#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, i;
	char *main_ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	count = atoi(argv[1]);
	if (count < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < count - 1; i++)
		printf("%02hhx ", main_ptr[i]);
	printf("%02hhx\n", main_ptr[i]);
	return (0);
}
