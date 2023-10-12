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
	int x;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 1; i < n; i++)
	{
		x = va_arg(args, int);
		if (separator != NULL)
			printf("%d%c ", x, *separator);
		else
			printf("%d ", x);
	}
	x = va_arg(args, int);
	printf("%d\n", x);

	va_end(args);

}
