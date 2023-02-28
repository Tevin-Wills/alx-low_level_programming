#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: String to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);/*counts each allocated character memory*/
	}
	_putchar('\n');
}
