#include"stdio.h"
/**
 * main - check
 * Return: 0 if upper
 */

int main(void)
{
	long int x;
	long int ca;
	long int c;

	c = 612852475143;
	for (x = 1; x <= (c - 1); x++)
	{
		if ((c % x) == 0)
		{
			ca = x;
		}
	}
	printf("%ld\n", ca);
	return (0);
}
