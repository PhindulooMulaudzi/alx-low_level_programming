#include "main.h"

/**
 * _isalpha - checks if alphabetic
 * @c: int
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
