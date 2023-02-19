#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{

	int c;

	c = 0;
	while (c < 10)
	{
		char x = c + '0';

		putchar(x);
		c++;
	}
	putchar('\n');
	return (0);
}
