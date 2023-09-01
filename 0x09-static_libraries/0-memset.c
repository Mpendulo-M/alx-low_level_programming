#include "main.h"
/**
 *_memset - fills first n bytes with constant b
 *@s: memory address
 *@b: Constant byte
 *@n: number of bytes
 *Return: new array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count;

	count = 0;

	while (n > 0)
	{
		s[count] = b;
		count++;
		n--;
	}

	return (s);
}
