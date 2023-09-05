#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concantenates strings
 *@s1: String one
 *@s2: string two
 *Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x, i, l, m, n;

	while (*s1)
		i++;
	
	while (*s2)
		l++;


	ptr = malloc(((sizeof(char) * i) + (sizeof(char) * l)) + 1);

	for (m = 0; *s1; m++)
		ptr[m] = s1[m];
	m++;
	x = 0;

	for (n = m; *s2; n++)
	{
		ptr[n] = s2[x];
		x++;
	}

	return (ptr);
}
