#include "main.h"
/**
 *_strcpy -copies the string pointed to by src to dest
 *@src: string to be copied
 *@dest: copy into
 *Return: new string dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x;

	while (*(src + i) != '\0')
	i++;

	for (x = 0 ; x < i ; x++)
		dest[x] = src[x];

	dest[i] = '\0';
	return (dest);

}
