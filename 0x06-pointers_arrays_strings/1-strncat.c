#include "main.h"
/**
 *_strncat - adds strings
 *@dest: string one
 *@src: string two
 *@n: byte control
 *Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int counter = 0;

	while (dest[counter] != '\0')
		counter++;
	while (l < n && src[l] != '\0')
	{
		dest[counter] = src[l];
		counter++;
		l++;
	}
	dest[counter] = '\0';
	return (dest);

}
