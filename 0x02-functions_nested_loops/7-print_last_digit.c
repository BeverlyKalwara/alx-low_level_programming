#include "main.h"

/**
 * print_last_digit - Check main
 * @n: An input number
 * Description: This function prints the last digit of a number
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(-(ld) + '0');
		return (-ld);
	}
}
