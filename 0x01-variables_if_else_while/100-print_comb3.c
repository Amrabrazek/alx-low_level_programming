#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if ((x != 9) || (y != 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
