#include "main.h"
int _sqrt(int n, int base);
/**
 *_sqrt_recursion - calc square root
 *@n: number to calc root for
 *Return:  square root
 */
int _sqrt_recursion(int n)
{
	int result;

	if (n < 0)
		return (-1);
	result = _sqrt(n, 0);

	return (result);

}
/**
 * _sqrt - recursively calc square root
 * @n: number to calc square root for
 * @base: possible answer
 * Return: answer
 */
int _sqrt(int n, int base)
{
	int prod;

	prod = base * base;
	if (prod > n)
		return (-1);
	else if (prod == n)
		return (1);

	return (_sqrt(n, base + 1));
}
