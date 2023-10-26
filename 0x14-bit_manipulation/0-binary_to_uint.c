#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: Binary
 * Return: unsigned int or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int answer = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			answer = (answer << 1) | (b[i] - '0');
		else
			return (0);
		i++;
	}

	return (answer);
}
