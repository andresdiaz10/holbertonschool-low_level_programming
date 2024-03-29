#include "lists.h"
/**
 *  print_dlistint - print a linked list
 *  @h: head of the linked list
 *
 *  Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
