#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked listint_t list
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the length of the list.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	if (!h)
		return (0);
	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
