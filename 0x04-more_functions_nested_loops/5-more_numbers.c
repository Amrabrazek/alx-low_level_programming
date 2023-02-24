#include"main.h"
/**
 * more_numbers- check
 * Return: 0 if upper
 */

void more_numbers(void)
{
	int i;
	int c = 10;

	while (c--)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');

	}
	_putchar('\n');
	}
}
