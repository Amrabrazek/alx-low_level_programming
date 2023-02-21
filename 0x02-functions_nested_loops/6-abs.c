#include"main.h"
/**
 * _abs - check
 * @n: the character to be checked
 * Return: 0 if upper
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	return (0);
}
