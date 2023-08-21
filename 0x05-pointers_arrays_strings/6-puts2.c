#include "main.h"
/**
 *puts2 - print every other character
 *@str: string
 */
void puts2(char *str)
{
	int i = 1;

	while (*str != '\0')
	{
		if ((i % 2) != 0)
		{
			_putchar(*str);
			i++;
			str++;
		}
		else
		{
			i++;
			str++;
		}
	}
	_putchar('\n');

}
