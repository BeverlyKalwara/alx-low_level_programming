#include "main.h"

/**
 * print_alphabet - Check description
 * Description: prints the alphabet 10 times in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char lc;
	int times;

	for (times = 0; times <= 9; times++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
