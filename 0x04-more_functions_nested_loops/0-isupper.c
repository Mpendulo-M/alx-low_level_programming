#include "main"
/**
 * _isupper - checks if letter is upper case
 *@c: letter to be checked 
 * Return: 0 if uppercase else return 1
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (0);

	else if ((c >= 97) && (c <= 122))
		return (1);
}
