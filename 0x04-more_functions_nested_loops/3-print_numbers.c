#include "main.h"

/**
 * print_numbers - A function that prints numbers 0 to 9
 * followed by a new line
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
