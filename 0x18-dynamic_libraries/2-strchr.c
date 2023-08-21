#include "main.h"
#include <stdio.h>

/**
 * *_strchr - find character in string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to first char instance
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
