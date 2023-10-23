#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: the head.
 * @index: index of the element to be returned.
 *
 * Return: Returns the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	p = head;

	for (i = 0; i < index - 1; i++)
	{
		p = p->next;
	}
	return (p);
}
