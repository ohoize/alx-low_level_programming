#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Alwas 0.
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}

	}
	printf("%\n", fp);
	return (0);
}
