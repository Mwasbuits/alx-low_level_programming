#include "main.h"

/**
 * _abs-check main
 * @r:_abs
 * Description: The function computers
 * absolute interger value r
 * Return: 0 (absolute value of number r)
 */

int _abs(int r)
{

	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
