#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry; concatenate all program arguments
 *
 * @ac: int input;argument count
 * @av: double pointer array; argument vector
 * Return: a pointer to array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int e, f, g = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
			l++;
	}
	l += ac;
	aout = malloc(sizeof(char) * l + 1);
	if (aout == NULL)
		return (NULL);
	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
		{
			aout[g] = av[e][f];
			g++;
		}
		if (aout[g] == '\0')
		{
			aout[g++] = '\n';
		}
	}
	return (aout);
}
