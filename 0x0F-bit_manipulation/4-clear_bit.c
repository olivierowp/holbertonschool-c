#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long integer
 * @index: index to clear
 * Return: 1 if success, 0 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = (sizeof(n) * 8) - 1;

	if (index > len)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
