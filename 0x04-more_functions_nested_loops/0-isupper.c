#include "main.h"

/**
 * Main -entry point
 * int _isupper(int c)- @c
 * function checking for upper case character
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
