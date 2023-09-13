#include <stdio.h>
#include "main.h"

/**
 * print_to_98- check main
 * Description of @n: The interger value
 * prints all natural numbers from n to 98
 * separated by comma
 * followed by space
 * Return: 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
		printf(", ");
	}
	printf("\n");
	}
}
