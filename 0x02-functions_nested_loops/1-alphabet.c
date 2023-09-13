#include "main.h"

/**
 * main-Entry point
 * printing alphabet in lowe case
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
