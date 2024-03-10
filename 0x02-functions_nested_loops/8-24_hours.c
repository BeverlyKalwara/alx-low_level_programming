#include "main.h"

/**
 * jack_bauer - Check main
 * x, y - An input number
 * Description: This function prints every minute starting from 00:00 to 23:59
 * Return: last digit
 *
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
