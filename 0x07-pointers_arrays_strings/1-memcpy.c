#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory where data is stored
 *@src: memory to copy to
 *@n: number of bytes
 *Return: new copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count, holder;

	count = 0;
	holder = n;

	while (count < holder)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);

}
