#include "lists.h"
/**
 * dlistint_len - gets the number of elements in list
 * @h: address of the head
 *
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elem = 0;
	while(h != NULL)
	{
		if (h->n)
			elem++;
		h = h->next;
	}
	return(elem);
}
