#include "main.h"

/**
 * *_memset - set memory with byte
 * @s: dest
 * @b: src
 * @n: length
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
