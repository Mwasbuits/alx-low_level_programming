#include "main.h"

/**
 * print_last_digit-check main
 * @r: As the interger input
 * print last digit of the interger
 * Return: 0 (Success)
 */

int print_last_digit(int r)
{
	int a;

	if (r < 0)
		a = -1 * (r % 10);
	else
		a = r % 10;
	_putchar((a % 10) + '0');

	return (a % 10);
}
