#include "main.h"
/**
 *_strchr - locates character in a string
 *@s: the string
 *@c: character to be found
 *Return: charcter c or null if character not found
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count))
			return (&(s + count));
		count++;
	}
	return (0);

}
