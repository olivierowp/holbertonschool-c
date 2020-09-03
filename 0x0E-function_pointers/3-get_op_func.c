#include <string.h>
#include "3-calc.h"

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

	index = 0;
	while (index < 5)
	{
		if (!strcmp(ops[index].op, s))
			return (ops[index].f);
		index++;
	}
	return (NULL);
}
