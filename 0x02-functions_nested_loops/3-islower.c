#include "main.h"

/**
 * _islower - Check description
 * @c: the input character to be checked
 * Description: It checks for lowercase character
 * Return: Nothing.
 */
int _islower(int c)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (c == lc)
		{
			return (1);
		}
	}
	return (0);
}
