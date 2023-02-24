#include"main.h"
/**
 * print_diagonal - check
 * @n: number of rows
 * Return: 0 if upper
 */

void print_diagonal(int n)
{
	int c;
	int x;

	if (n <= 0)
	{
		_putchar('$');
		_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
		for (x = 0; x <= (c - 1); x++)
		{
			_putchar(' ');
		}
	_putchar('/');
	_putchar('$');
	_putchar('\n');
	}
	}
}
