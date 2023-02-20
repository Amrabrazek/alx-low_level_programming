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
	int v;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = 0;
			while (z < 10)
			{
				v = y + 1;
				while (v < 10)
				{
					if (!((x == z) && (y == v)))
					{	putchar(x + '0');
						putchar(y + '0');
						putchar(' ');
						putchar(z + '0');
						putchar(v + '0');
						if (x == 9 && y == 8 && z == 9 && v == 9)
						{
							v++;
							continue;
						}
						putchar(',');
						putchar(' ');
					}
					v++;
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
