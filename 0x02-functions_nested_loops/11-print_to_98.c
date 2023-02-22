#include"main.h"
/**
 * print_to_98 - check
 * @x: first number
 * Return: last which is the last value
 */

void print_to_98(int x)
{
	int c;
	
	if (x < 98)
	{
	for(c = x; c <=98; c++)
	{
		if (c < 0)
		{
			_putchar('-');
			_putchar((c * -1) + '0');
		}
		if (c < 9)
		{
			_putchar(c + '0');
		}
		else
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	}
	else
	{
		for(c = x; c >= 98; c--)
		{
			if (c > 100)
			{
				_putchar((c / 100) + '0');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		_putchar(',');
		_putchar(' ');
		}
	}
}
