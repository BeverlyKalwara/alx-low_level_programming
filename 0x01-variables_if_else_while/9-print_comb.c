#include <stdio.h>

/**
 * main - Prints all single digit numbers
 *        only using putchar and without char variables.
 *        Separated by a comma, followed by a space
 *        exempting a no by use of  break or continue
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
