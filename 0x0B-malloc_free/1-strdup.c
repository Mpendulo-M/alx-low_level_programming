#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - calculate length
 *@s: string to be checked for length
 *Return: string length
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
/**
 *_strcpy - copy string
 *@dest: original string
 *@src: duplicate
 *Return: new string
 */
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
/**
 *_strdup - duplicates string
 *@str: string to be duplicated
 *Return: duplicate
 */
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

