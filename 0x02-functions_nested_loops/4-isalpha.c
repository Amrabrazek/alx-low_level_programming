#include"main.h"
/**
 * _isalpha - check
 * @c: the character to be checked
 * Return: 0 if upper
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
