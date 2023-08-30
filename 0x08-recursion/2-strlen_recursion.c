#include "main.h"
/**
 *_strlen_recursion - counts number of characters
 *@s: string to be counted
 *Return: count
 */
int _strlen_recursion(char *s)
{

	int count = 0;

	if (*(s + 0))
	{
	count++;
	s++;
	count = count + _strlen_recursion(s);

	}

	return (count);
}
