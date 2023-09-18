#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: Input string.
 *
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
