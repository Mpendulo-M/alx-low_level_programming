#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

        int ch = 'a';

        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }

        putchar('\n');

}

int main(void)
{

	print_alphabet();


	return (0);
}

