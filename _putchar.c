#include <unistd.h>
#include "main.h"

/**
 * _putchar - write a char to standard output
 * @c: char
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
