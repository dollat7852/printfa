#include "main.h"

int *print_char(char c, int *i)
{
    _putchar(c);
    (*i)++;
    return (i);
}