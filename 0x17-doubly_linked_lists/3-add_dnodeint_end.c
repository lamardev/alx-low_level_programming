#include "lists.h"

/**
 * Adds a new node with the given value to the end of a doubly linked list.
 *
 * @param head: A double pointer to the head of the doubly linked list.
 * @param n: The integer value to add to the new node.
 *
 * @Return A pointer to the newly added node, or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		new->n = n;

		return (new);
	}
	else
	{
		dlistint_t *tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
		new->next = NULL;
		new->n = n;

		return (new);
	}

}
