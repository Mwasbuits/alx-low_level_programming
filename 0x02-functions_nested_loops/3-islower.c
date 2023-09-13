#include "main.h"

/**
 * int _islower-Entry point
 * Description:Check for lowercase character
 * Return: 1 (lowercase) or 0 if uppercase
 */

int _islower(int c)
{
	char a;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
	}

	return (lower);
}


