#include "main.h"
#include <stdio.h>
/**
 *rot13 - encodes a string
 *@s: pointer to string
 *Return: *s
 */

char *rot13(char *s)
{
	int i, x;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoder[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[i] == alpha[x])
			{
				s[i] = encoder[x];
				break;
			}
		}
	}
	return (s);
}

