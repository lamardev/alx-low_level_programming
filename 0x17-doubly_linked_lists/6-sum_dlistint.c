#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a doubly linked list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Description: This function calculates the sum of all the data values (n) in
 * Return: The sum of all the data in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
