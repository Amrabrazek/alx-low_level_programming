#include"stdio.h"
/**
 * main - check
 * Return: 0 if upper
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3) == 0 && (c % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((c % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((c % 5) == 0)
		{
			printf("Buzz");
	
			if (c != 100)
			{
				putchar(' ');
			}
		}
		else
		{
			printf("%i ", c);
		}
	}
	putchar('\n');
	return (0);
}
