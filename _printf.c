#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * @brief 
 * 
 * @param format 
 * @param ... 
 * @return int 
 */

int _printf(const char * const format, ...)
{
    int i = 0;
    int disp_count = 0;
    int *ip = &disp_count;
    char *str = NULL;
    int num;
    char ch;
    va_list args;
    va_start(args, format);
   while (format[i] != '\0')
   {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            disp_count++;
        }
        else
        {
            if (format[i + 1] == 'c')
            {
                i++;
               ch = va_arg(args, int);
               print_char(ch, ip);
             //  disp_count++;
            }
            else if (format[i+1] == 's')
            { i++;
                str = va_arg(args, char *);
                disp_count += _printf(str);
                //disp_count += strlen(str);
            }
            else if (format[i + 1] == '%')
            {
                _putchar('%');
                disp_count++;
            }
            else if (format[i + 1] == 'd')
            {
                i++;
                num = va_arg(args, int);
                print_num(num, ip);
               

            }
        }
        i++;
        
   }
 
   //_putchar('\n');
   va_end(args);
   return (disp_count);
}