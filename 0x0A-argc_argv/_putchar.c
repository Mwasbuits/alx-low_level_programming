#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: Character to be printed
 *
 * Return: 1 (success), -1 (error and errno is set appropriately).
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
