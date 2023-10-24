#include "lists.h"

/**
 * free_listint2 - Free listint_t.
 * @head: data type pointer the head/next node
 * Return: 0 elements all free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		free(*head);
		temp = (*head)->next;
		*head = temp;
	}
	*head = NULL;
}
