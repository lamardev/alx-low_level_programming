#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head node of the list.
 *
 * Description: This function frees the memory occupied by a doubly linked list.
 * Return: The function does not return a value.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while(head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
