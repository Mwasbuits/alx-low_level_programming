#include "main.h"

/**
 * swap_int:function that swaps the values of two integers.
 * @a: An input interger
 * @b: An input interger
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	swap_int(&*a, &*b);
}
