#include "main.h"

/**
 *print_alphabet - Makes the alphabet
 * prints the alphabet in lowercase, followed by a new line.
 * return : void
 */
void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
