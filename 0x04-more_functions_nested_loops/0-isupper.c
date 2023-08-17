#include "main.h"
/**
 * _isupper - checks if letter is upper case
 *@c: letter to be checked
 * Return: always 1 if uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
