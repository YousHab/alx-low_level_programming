#include "lists.h"
/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t list.
 * @h: the d list
 * Return: number of elements of doubly linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t count = 0;

	node = h;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
