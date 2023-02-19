#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{

	for (int n = 0; n <= 9; n++)
	{
		char c = n + '0';

		putchar(c);
	}
	putchar('\n');
	return (0);
}
