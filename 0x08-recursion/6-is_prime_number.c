#include "main.h"

int _prime(int x, int y);

/**
 * is_prime_number - determines if number is prime
 * @n: number to be tested
 * Return: 1 if prime.  is not
 */
int is_prime_number(int n)
{
	int res;

	if (n <= 1)
		return (0);

	res = _prime(n, n - 1);

	return (res);

}

/**
 * _prime - determine prime
 * @x: number to be tested
 * @y: iterate
 * Return: 1 if prime. 0 if not
 */
int _prime(int x, int y)
{
	if (y == 1)
		return (1);
	if ((x % y == 0) && y > 0)
		return (0);
	return (_prime(x, y - 1));

}
