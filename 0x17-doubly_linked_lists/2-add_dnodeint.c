#include "lists.h"
/**
 * add_dnodeint - add a new node in the begin of the linked list
 * @head: head of the linked list
 * @n: new node
 *
 * Return: adress of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!(new_node))
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
