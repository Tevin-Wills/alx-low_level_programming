#include "main.h"
#include <stdlib.h>
/**
 *  str_concat - concertinate two strings
 *
 *  @s1: first string
 *  @s2: second string
 *
 *  Return: pointer to the conc... string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, g, l;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (g = 0; g < len1; g++)
	{
		ptr[g] = s1[g];
	}

	for (l = 0; l <= len2; l++)
	{
		ptr[g] = s2[l];
		g++;
	}
	return (ptr);
}
