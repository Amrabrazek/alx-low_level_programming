#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = 0;
			while (z < 10)
			{
				if ((y > x) && (z > y))
				{	
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if ((x != 7) || (y != 8) || (z != 9))	
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
