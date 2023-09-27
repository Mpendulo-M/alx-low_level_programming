#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: the string
 */
void _print_rev_recursion(char *s)
{
	int x = 0;

	if (*(s + x) != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[0]);
	}
}
