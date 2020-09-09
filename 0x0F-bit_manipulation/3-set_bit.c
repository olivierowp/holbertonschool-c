#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input pointer to unsigned long integer
 * @index: index to change to zero
 * Return: 1 if success, 0 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = (sizeof(index) * 8) - 1;

	if (index > len)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
