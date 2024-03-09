#include "main.h"

/**
 * _abs - Check Holberton
 * @n: The integer to be computed.
 *
 * Description: computes the absolute value of an integer
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return(n);
	}
	else
	{
		return (-n);
	}
}
