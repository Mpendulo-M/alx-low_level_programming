#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/*
* print_all - prints everything
* @format: format
*/

void print_all(const char * const format, ...)
{
    va_list args;

    char *str, *sent;
    int num;
    double dec;
    int i = 0;

    va_start(args, format);

    while (format[i] != '\0')
    {
        char *result = strchr("cifs", format[i]);
        
        if (result == NULL)
        {
            i++;
            continue;

        }
            

        if (format[i] == 'c')
        {
            str = va_arg(args, char *);
            printf("%s", str);
        }else if (format[i] == 'f')
        {
            dec = va_arg(args, double);
            printf("%f", dec);
        }else if (format[i] == 'i')
        {
            num = va_arg(args, int);
            printf("%d", num);
        }else if (format[i] == 's')
        {
            sent = va_arg(args, char *);
            printf("%s", sent);
        }
        
        if (format[i + 1] != '\0')
            printf(", ");



        i++;
    }
}
