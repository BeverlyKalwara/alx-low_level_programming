#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * only using putchar
 * Return: Always 0.
 */

int main(void)
{
	int letter;
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}

	for (letter = 0; letter < 6; letter++)
	{
		putchar('a' + letter);
	}
	putchar('\n');

	return (0);
}
