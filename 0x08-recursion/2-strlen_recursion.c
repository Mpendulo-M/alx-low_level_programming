#include "main.h"
/**
 *_strlen_recursion - counts len of str
 *@s: the string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int result = 0;

	if (*s)
	{
		result++;
		s++;
		result = result + _strlen_recursion(s);
	}

	return (result);

}
