#include "main.h"

/**
 *  print_line:a function that draws a straight line in the terminal.
 *  @n:An input interger
 *  line should end with a \n
 *  If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
