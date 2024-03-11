#include "main.h"

/**
 * print_times_table - Check main
 * i, m, p - An input number
 * @n: this the n imput times table
 * Description: This function prints the 9 times table, starting with 0
 * Return:  n times table
 */
void print_times_table(int n)
{
	int i, m, p;

	if (n >= 0 && n <= 15)
	{
		for (n = 0; i <= n; i++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				p = i * m;
				_putchar(',');
				_putchar(' ');

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
				{
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p >= 10 && p <= 99)
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					_putchar((p / 10) + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar((p % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
