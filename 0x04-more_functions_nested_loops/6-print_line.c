#include"main.h"
/**
 * print_line - check
 * Return: 0 if upper
 */

void print_line(int n)
{
	if (n >= 0)
	{
	while (n--)
	{
		_putchar('_');
	}
	}
	_putchar('$');
	_putchar('\n');
}
