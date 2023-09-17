#include "main.h"

/**
 * print_most_numbers- A function that prints 0 to 9,
 * followed by a new line.
 * @i: A inout interger
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{

		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}




