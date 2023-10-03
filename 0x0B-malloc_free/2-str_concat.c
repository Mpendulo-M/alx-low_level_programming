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
	char *ptr, *hold1, *hold2;
	int x, i, n, len, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	hold1 = s1;
	hold2 = s2;

	i = 0;
	while (s1[i] != '\0')
		i++;
	x = 0;
	while (s2[x] != '\0')
		x++;

	len = i + x;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	s1 = hold1;
	s2 = hold2;

	for (n = 0; n < i; n++)
		ptr[n] = s1[n];

	for (z = 0; z < x; z++)
	{
		ptr[n] = s2[z];
		n++;
	}
	ptr[n] = '\0';

	return (ptr);
}

