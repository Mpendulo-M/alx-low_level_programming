#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concats two strings
 * @s1: string one
 * @s2: string two
 * @n: nth term
 * Return: pointer to memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, x, len, a, b;
	char *hold1, *hold2, *ptr;

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
	len = x + i;
	s1 = hold1;
	s2 = hold2;

	if (n >= x)
	{
		ptr = (char *)malloc(sizeof(char) * (len + 1));
		if (ptr == NULL)
			return (NULL);
		for (a = 0; a < i; a++)
			ptr[a] = s1[a];
		for (b = 0; b < x; b++)
		{
			ptr[a] = s2[b];
			a++;
		}
	} else
	{
		ptr = (char *)malloc(sizeof(char) * (i + n + 1));
		if (ptr == NULL)
			return (NULL);
		for (a = 0; a < i; a++)
			ptr[a] = s1[a];
		for (b = 0; b < n; b++)
		{
			ptr[a] = s2[b];
			a++;
		}
	}
	ptr[a] = '\0';
	return (ptr);

}
