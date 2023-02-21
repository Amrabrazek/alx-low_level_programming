#include"main.h"
/**
 * int _islower - check 
 * Return: 0 if upper
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
}
