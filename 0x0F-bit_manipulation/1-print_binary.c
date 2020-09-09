#include "holberton.h"

/**
 * print_binary - prints the binary
 * @n: unsigned long int is n that count
 * 
 * void
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
