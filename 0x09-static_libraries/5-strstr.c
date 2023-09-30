#include "main.h"
/**
 *_strstr: locates a substring
 *@haystack: String to search in
 *@needle: substring to be found
 *Return: 0 (Successfule)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return (haystack);
	}
	return (0);
}
