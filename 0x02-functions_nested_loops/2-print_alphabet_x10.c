#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * return : void
 */
void print_alphabet_x10(void)
{
	int newline = 0;
	char t;

	while (newline <= 9)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
		newline++;
	}
}
