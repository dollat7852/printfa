#include "main.h"

/**
 * print_num - print a number regardless of type
 * @n: int
 * @i: int pointer for count
 * Return: int
 */
int *print_num(int n, int *i)
{   
    if (n < 0)
    {
        _putchar('-');
        n *= -1;
        (*i)++;
    }

	if (n / 10)
		print_num(n / 10, i);
	_putchar((n % 10) + '0');
	(*i)++;
	return (i);
}
