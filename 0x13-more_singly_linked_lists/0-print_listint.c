#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: a pointer to the head of the list.
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	if (!h)
	{
		return (0);
	}
	ptr = h;
	while (ptr)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
