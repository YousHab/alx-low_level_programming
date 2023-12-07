#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: the linked list.
 * Return: the length.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t count = 0;

	node = h;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
