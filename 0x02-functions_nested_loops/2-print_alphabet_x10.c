#include "main.h"

/**
 * print_alphabet_x10-Entry point
 * Description: function uses _putchar to print X10 alphabet.
 * in lower cases followed by new line
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char b;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}