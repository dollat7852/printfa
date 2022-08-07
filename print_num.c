#include "main.h"
int *print_num(int n, int *i)
{
    if (n / 10)
		print_num(n / 10, i);
	_putchar((n % 10) + '0');
   (*i)++;
    return (i);
    
}