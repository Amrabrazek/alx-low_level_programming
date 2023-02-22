#include"main.h"
/**
 * times_table - check
 * Return: last which is the last value
 */

void times_table(void)
{
	int h;
	int m;
	int x;

	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			x = m * h;
			if (x > 99)
			{
				_putchar(x / 100 + '0');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(',');
			}
			else if (x > 9)
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(',');
			}
			else
			{
				if (m != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
