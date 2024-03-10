#include "main.h"

/**
 * times_table - Check main
 * i, m, p - An input number
 * Description: This function prints the 9 times table, starting with 0
 * Return: 9 times table
 *
 */
void times_table(void)
{
	int i, m, p;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (m = 1; m <= 9; m++)
		{
			p = i * m;

			if (p <= 9)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			if (m == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
