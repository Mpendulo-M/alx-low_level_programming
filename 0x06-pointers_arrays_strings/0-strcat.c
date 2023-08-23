#include "main.h"
/**
 *_strcat - adds strings together
 *@dest: string one
 *@src: string two
 *Return: new string
 */
char *_strcat(char *dest, char *src)
{
	char *holder = dest;

	while (*holder != '\0')
	{
		holder++;
	}

	while (*src != '\0')
	{
		*holder = *src;
		holder++;
		src++;
	}
	*holder = '\0';
	dest = holder;
	return (dest);
}
