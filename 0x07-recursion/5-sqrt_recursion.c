#include "holberton.h"

/**
 * _sqrt - helper function for _sqrt_recursion
 * @n: input number
 * @i: iteratotr
 * Return: square root of number
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: square root of number or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
