#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum of a and b.
 * @a: first operand
 * @b: second operand
 * Return: sum of the two operands
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b.
 * @a: first operand
 * @b: second operand
 * Return: difference of the two operands
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b.
 * @a: first operand
 * @b: second operand
 * Return: product of the two operands
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b.
 * @a: first operand
 * @b: second operand
 * Return: division of the two operands
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error!\n");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of a and b.
 * @a: first operand
 * @b: second operand
 * Return: remainder of the two operands
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error!\n");
		return (100);
	}
	return (a % b);
}
