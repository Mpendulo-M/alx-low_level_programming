#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sums up all agruments
 *@n: number of arguments
 *Return: the Sum or 0 if no argumets are passed
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list args;
	int i, sum, x;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}

	return (sum);
}
