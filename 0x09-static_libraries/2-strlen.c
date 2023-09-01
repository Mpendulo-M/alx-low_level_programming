#include "main.h"
/**
 *_strlen - counts length of string
 *@s: the strring to be counted
 *Return: length of string
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
