#include "main.h"
/**
 * _isalpha - Checks for alphabets 
 * @c: the character to be checked
 * Return: 1 (Successful), 0 (Unsuccessful)
 */

int _isalpha(int c)
{
	if (c >= 65 && c<= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);


}
