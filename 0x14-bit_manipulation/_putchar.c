#include <unistd.h>

/**
 * _putchar - write character to stdout
 * @c: character
 *
 * Return: 1 if success, -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
