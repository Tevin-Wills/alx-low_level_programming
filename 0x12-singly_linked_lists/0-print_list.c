#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 *
 * Return: total number of nodes in h
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 1; h->next != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (count);
}
