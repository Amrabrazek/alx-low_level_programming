#include"main.h"
/**
 * _islower - check
 * @c: the input
 * Return: 0 if upper
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
