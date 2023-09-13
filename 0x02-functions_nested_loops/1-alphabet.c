#include "main.h"

/**
 * main-Entry point
 * Description-print_alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)

{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');

}
