#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_operator - get index of operator array
 * @operator: operator
 * @ops: array of operators and functions
 * Return: index of operator array.
 */
int get_operator(char *operator, op_t *ops)
{
	int index;

	index = 0;
	while (index < 5)
	{
		printf("index: %i\n", index);
		if (!strcmp(ops[index].op, operator))
		{
			printf("test: %i\n", index);
			return (index);
		}
		index++;
	}
	return (5);
}

/**
 * get_op_func -  selects the correct function to
 * perform the operation asked by the user
 * @s: input string
 * Return: pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	int index;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	index = get_operator(s, ops);
	printf("index: %i\n", index);
	return (ops[index].f);
}
