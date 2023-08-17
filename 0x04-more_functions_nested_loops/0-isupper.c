#include "main.h"
/**
 * _isupper - checks if letter is upper case
 *@c: letter to be checked 
 * Return: always  0 if uppercase else return 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
