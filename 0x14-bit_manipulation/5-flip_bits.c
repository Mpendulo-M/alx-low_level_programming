#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * @n: num1
 * @m: num2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int counter = 0;
	unsigned long int c;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = x >> i;
		if ((c & 0x01) != 0)
			counter++;
	}

	return (counter);
}

