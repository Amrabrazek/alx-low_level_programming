#include"main.h"
/**
 * print_triangle - check
 * @n: numbe of rows
 * Return: 0 if upper
 */

void print_triangle(int n)
{
	int c;
	int x;

	if (n > 0)
	{
	for (c = 0; c < n; c++)
	{
		for (x = 0; x <= (n - c); x++)
		{
			_putchar(' ');
		}
		for (x = 0; x <= c; x++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
