#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 * Return: 1 on success and 0 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
