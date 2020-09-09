#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input unsigned long
 * @index: index to return
 * Return: value at input index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = (sizeof(unsigned long int) * 8) - 1;

	if (index > len)
		return (-1);
	return ((n >> index) & 1);
}
