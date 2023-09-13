#include "main.h"

/**
 * isalpha-checks for character
 * Descriptin: checks for alphabetic character
 * Return: 1 (letter) or 0 (otherwise)
 */

int _isalpha(int c)
{
	char lower, upper;
	int number = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				number = 1;
		}
	}

	return (number);
}
