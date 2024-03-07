#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *        Numbers should range from 0 to 99
 *        two numbers should be separated by a space
 *        All numbers should be printed with two digits 1 as 01
 *        The comb of nos separated by comma, followed by a space
 *        and in ascending order
 *        00 01 and 01 00 are assumed as same combination o nos 0 and 1
 *
 * Return: Always 0.
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x == 98 && y == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
