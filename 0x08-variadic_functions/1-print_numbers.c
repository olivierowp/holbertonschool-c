#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (n == 0)
	{
		return;
	}
	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arg, n);
	for (i = 0; i < n - 1; i++)
	{

		printf("%d%s", va_arg(arg, int), separator);
	}
	printf("%d\n", va_arg(arg, int));
	va_end(arg);
}
