#include "main.h"

/**
 * sign.-Entry
 * Description:prints the sign of a number.
 * Return: 1 (positive)or, 0 (zero)
 * or -1 (negative)
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}

	else
	{
		sign = -1;
		_putchar('-');
	}
	return (sign);
}
