#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - duplicates string
 *@str: string to be duplicated
 *Return: New duplicated string otherwise NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	int len = _strlen(str);
	char *ptr = (char *)malloc(len + 1);

	if (ptr == NULL)
		return (NULL);
	_strcpy(ptr, str);

	return (ptr);
}
