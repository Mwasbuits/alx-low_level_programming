#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name followed by a new line.
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
