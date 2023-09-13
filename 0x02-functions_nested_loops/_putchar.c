#include <unistd.h>

/**
 * main-Entry point
 * printing character a
 * Return: 1 (Succes)
 * onerror: -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
