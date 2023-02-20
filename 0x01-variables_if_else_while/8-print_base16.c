#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int x;
	char c;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	c = 'a';
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
