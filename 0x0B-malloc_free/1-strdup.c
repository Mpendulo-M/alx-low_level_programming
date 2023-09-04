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
	int i = 0;
	int l;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (*str)
		i++;

	i++;
	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		ptr[l] = str[l];

	return (ptr);




}
