#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to find the length of.
 * Return: (Success)
 */

int _strlen(const char *s)
{
	int ext;

	ext = 0;
	while (s[ext] != '\0')
		ext++;
	return (ext);
}

/**
 * add_node - adds a node to the linked list
 * @head: pointer to head of linked list to find the size of
 * @str: string to insert into the node of the linked listd
 * Return: number of nodes in the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = (malloc(sizeof(list_t)));
	if (!add)
	{
		free(add);
		return (NULL);
	}
	if (*head == NULL)
	{
		add->next = *head;
		add->str = strdup(str);
		add->len = _strlen(str);
		*head = add;
	} else
	{
		add->next = *head;
		add->str = strdup(str);
		add->len = _strlen(str);
		*head = add;
	}
	return (*head);
}
