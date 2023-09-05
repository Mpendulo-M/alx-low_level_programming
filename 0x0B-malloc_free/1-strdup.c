#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicates string
 * _strlen - calculate length
 * _strcpy - copy string
 *@s: string to be checked for length
 *@dest: original string
 *@src: duplicate
 *@str: string to be duplicated
 *Return: New duplicated string otherwise NULL
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x;

	while (*(src + i) != '\0')
		i++;

	for (x = 0 ; x < i ; x++)
		dest[x] = src[x];

	dest[i] = '\0';
	return (dest);
}

char *_strdup(char *str)
{
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	ptr = (char *)malloc(len + 1);

	if (ptr == NULL)
		return (NULL);
	_strcpy(ptr, str);

	return (ptr);
}
