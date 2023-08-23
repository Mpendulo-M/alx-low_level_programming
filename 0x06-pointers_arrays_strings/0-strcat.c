#include "main.h"
/**
 *_strcat - adds strings together
 *@dest: string one
 *@src: string two
 *Return: new string
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0;
	char holder[250];
	int z = 0;
	int l, i, m, k;

	while (*dest != '\0')
	{
		counter++;
		dest++;
	}
	for (l = 0; l < counter; l++)
		dest--;
	for (i = 0; i < counter; i++)
		holder[i] = *(dest + i);

	while (*src != '\0')
	{
		z++;
		src++;
	}
	for (k = 0; k < z; k++)
		src--;
	for (m = 0; m < z; m++)
	{
		holder[counter] = *(src + m);
		counter++;
	}

	dest = holder;

	return (dest);

}

