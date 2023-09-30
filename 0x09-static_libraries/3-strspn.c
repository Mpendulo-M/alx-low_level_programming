#include "main.h"
/**
 *_strspn - Get length of a prefix substring
 *@s: The strinig
 *@accept: accepted char
 *Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			i++;
			accept++;
		}
		s++;
	}
	return (i);



}
