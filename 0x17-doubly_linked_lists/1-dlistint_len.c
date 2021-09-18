#include "lists.h"
/**
 * dlistint_len - number of elements in the linked list
 * @h: head of the linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elements = 0;

	while (h)
	{
		n_elements++;
		h = h->next;
	}
	return (n_elements);
}
