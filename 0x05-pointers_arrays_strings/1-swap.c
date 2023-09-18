#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: An input integer pointer
 * @b: An input integer pointer
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
