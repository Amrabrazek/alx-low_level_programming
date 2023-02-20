#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
