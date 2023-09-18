#include "main.h"

/**
 * print_rev -  A function that prints a string, in reverse,
 * followed by a new line.
 * @s: Pointer name
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	while (a > 0)
	_putchar(s[--a]);

	_putchar('\n');
}
