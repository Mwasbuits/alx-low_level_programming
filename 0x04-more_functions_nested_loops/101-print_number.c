#include "main.h"

/**
 * function that prints an integer.
 * @n: Interger value
 * Return: 0 (success)
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
	else
		print_number(n);
}
