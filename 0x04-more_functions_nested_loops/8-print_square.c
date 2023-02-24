#include"main.h"
/**
 * print_square - check
 * @n: number of rows
 * Return: 0 if upper
 */

void print_square(int n)
{
	int c;
	int x;

	if (n > 0)
	{
	for (c = 0; c < n; c++)
	{
		for (x = 0; x < n; x++)
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
