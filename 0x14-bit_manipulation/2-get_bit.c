#include"main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number to check bit
 * @index: index at which to check bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div;
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	i = n & div;
	if (i == divisor)
		return (1);
	return (0);
}
