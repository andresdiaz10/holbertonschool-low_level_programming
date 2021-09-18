#include "lists.h"
/**
 * sum_dlistint - sum all element in the linked list
 * @head: head of the linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int ret = 0;

	while (head)
	{
		ret += head->n;
		head = head->next;
	}
	return (ret);
}
