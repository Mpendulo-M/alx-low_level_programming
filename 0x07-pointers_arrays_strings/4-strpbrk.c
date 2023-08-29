#include "main.h"
/**
 *_strpbrk - searches string for any sets of bytes
 *@s: String
 *@accept: set of bytes
 *Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');

}
