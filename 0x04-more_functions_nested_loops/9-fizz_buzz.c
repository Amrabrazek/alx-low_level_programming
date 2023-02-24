#include"main.h"
/**
 * main - check
 * Return: 0 if upper
 */

int main(void)
{
	int c;
	int x;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3) == 0 && (c % 5) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if ((c % 3) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if ((c % 5) == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			if (c != 100)
			{
				_putchar(' ');
			}
		}
		else
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}

			_putchar(' ');
		}
	}
	_putchar('\n');
}
