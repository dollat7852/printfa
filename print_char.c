#include "main.h"

/**
 * print_char - print a char
 * @c: char
 * @i: int pointer to count how many char are printed
 * Return: int pointer
 */

int *print_char(char c, int *i)
{
	_putchar(c);
	(*i)++;
	return (i);
}
