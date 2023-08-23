#include "main.h"
/**
 *_strncat - adds strings
 *@dest: string one
 *@src: string two
 *@n: byte control
 *Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *holder = dest;
	int i;

	while (*holder != '\0')
		holder++;

	for (i = 0; i < n; i++)
	{
		*holder	= *src;
		holder++;
		src++;
	}
	dest = holder;

	return (dest);



}
