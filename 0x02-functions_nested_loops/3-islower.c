#include "main.h"

/**
 *_islower - Entry point
 *
 * Return: Always 1 (Success) 
 *
 * _islower(int c) - determines if c is lowercase or not
 */
int _islower(int c)
{


	if (c>= 97 && c<= 122)
		return (1);
	else
		return (0);
}


