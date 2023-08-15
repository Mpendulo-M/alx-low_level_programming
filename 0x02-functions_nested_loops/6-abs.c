#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @x: integer to be tested 
 * Return postive x is x is negtive or positive or return 0
 *
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x == 0)
		return (0);
	else
		return (x);

}
