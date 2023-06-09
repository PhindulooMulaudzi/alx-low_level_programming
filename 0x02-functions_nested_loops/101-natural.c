#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	unsigned long int sum3, sum5, totalSum;
	int i;

	sum3 = 0;
	sum5 = 0;
	totalSum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	totalSum = sum3 + sum5;
	printf("%lu\n", totalSum);
	return (0);
}
