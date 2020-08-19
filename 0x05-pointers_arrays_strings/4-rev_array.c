#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array of integers
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		swap_int(&a[i], &a[n - 1]);
		i++;
		n--;
	}
}
