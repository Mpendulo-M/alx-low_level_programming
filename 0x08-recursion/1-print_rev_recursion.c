#include "main.h"
/**
 *_print_rev_recursion - print string backwards
 *@s: strring to be printed
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
