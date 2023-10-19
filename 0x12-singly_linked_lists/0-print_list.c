#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: the list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%ld] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
