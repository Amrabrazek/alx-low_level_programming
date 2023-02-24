#include"stdio.h"
/**
 * main - check
 * Return: 0 if upper
 */

int main(int c)
{
	int x;
	int ca;

	for (x = 1; x <= c; x++)
	{
		if ((c % x) == 0)
		{
			ca = x;
		}
	}
	printf("%i\n", c)
	return (0);
}
