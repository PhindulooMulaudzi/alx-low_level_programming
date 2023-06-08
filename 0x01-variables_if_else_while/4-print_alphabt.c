#include <stdio.h>

/**
 * main - pPrint all the letters except q and e followed by a new line
 * Return: 0 if sucess non-zero otherwise
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
