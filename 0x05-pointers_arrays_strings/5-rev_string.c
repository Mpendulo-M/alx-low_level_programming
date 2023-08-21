#include "main.h"
/**
 *rev_string - reverses the string
 *@s: string to be reversed
 */
void rev_string(char *s)
{

	int count = 0;
	int i;
	char holder = s[0];

	while (s[count] != '\0')
		counter++;
	for (i = 0; i < count; i++)
	{
		count--;
		holder = s[i];
		s[i] = s[count];
		s[count] = holder;
	}
}
