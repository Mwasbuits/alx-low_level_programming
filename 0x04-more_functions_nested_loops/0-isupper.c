#include "main.h"

/**
 * Main -entry point
 * _isupper(int c)- @c checks for uppercase character
 * @c: input character
 * Return: 1 (Uppercase) or 0 (otherwise)
 */

int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
