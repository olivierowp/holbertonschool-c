#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first input unsigned long
 * @m: second input unsigned long
 * Return: how many bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	short count = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			count++;
		n >>= 1;
	}
	return (count);
}
