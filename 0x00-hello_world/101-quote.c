#include <stdio.h>
#include <unistd.h>

/**
 * main - prints "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line.
 * Return: 0 if exited succesfully or non-zero if failed
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
