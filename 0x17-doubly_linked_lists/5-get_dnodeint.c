#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of a doubly linked list.
 *
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index && head != NULL)
	{
		head = head->next;
		index--;
	}

	return (head);
}
