#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list arg;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		if (i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(arg);
}
