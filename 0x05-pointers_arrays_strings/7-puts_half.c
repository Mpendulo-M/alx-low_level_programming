#include "main.h"
/**
 *puts_halft - prints half the string
 *@str: string to be halved
 */
void puts_half(char *str)
{
	int i, x;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;


	if ((count % 2) == 1)
		i = ((count - 1) / 2);
	else
		i = count / 2;

	for (i = n; str[a] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');



}
