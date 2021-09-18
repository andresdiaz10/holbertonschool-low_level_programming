#include "lists.h"
/**
 * add_dnodeint_end - add new node in the end
 * @head: head of the linked list
 * @n: node to add in the end
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	new_node = malloc(sizeof(dlistint_t));
	if (!(new_node))
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (!(*head))
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	end = *head;
	while (end->next)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;
	return (new_node);
}
