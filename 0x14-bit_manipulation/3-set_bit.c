#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at index
 * @n: pointer to integer
 * @index: index
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
