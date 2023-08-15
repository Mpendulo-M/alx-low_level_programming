#include "main.h"
/**
 * entry -  _islower
 *
 * return - 1 (Successful)
 *
 * _islower() - determines if charater is lower case or not
 */

int _islower(int c)
{


	if (c >= 97 && c<= 122)
		return (1);
	else return (0);
}


