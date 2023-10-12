#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers passed as arguments
 *@separator: the sepatator
 *@n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i, x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		if (i != 3 && separator != NULL)
		{
			printf("%d%s", x, separator);
		}
		else if (i != 3 && separator == NULL)
			printf("%d", x);
		if (i == 3)
			printf("%d\n", x);
	}
	va_end(args);
}
