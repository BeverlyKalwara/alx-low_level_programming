#include "main.h"

/**
 * _isalpha- Check description
 * @c: the input character to be checked
 * Description: It checks for alphabet lowercase or uppercase
 * Return: Nothing.
 */
int _isalpha(int c)
{
	char lc;
	char uc;

	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			if (c == uc || c == lc)
			{
				return (1);
			}
		}
	}
	return (0);
}
