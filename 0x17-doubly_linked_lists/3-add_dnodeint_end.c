#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node with its value to the end of a list.
 *
 * @head: A double pointer to the head of the doubly linked list.
 * @n: The integer value to add to the new node.
 *
 * Return: pointer to the new node, or NULL if memory allocation fails.
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
