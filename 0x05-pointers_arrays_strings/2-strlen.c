#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: Input string.
 *
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		return (a);
}
