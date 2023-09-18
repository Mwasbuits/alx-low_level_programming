#include "main.h"

/**
 * rev_string - A  function that reverses a string.
 * @s: Pointer name.
 * Return: 0 (Success).
 */

void rev_string(char *s)
{
	int a, b;
	char x, y;

	b = _strlen(s) - 1;
	a = 0;

	while (a < b)
	{
		x = s[a];
		y = s[b];
		s[a++] = y;
		s[a--] = a;
	}
}
