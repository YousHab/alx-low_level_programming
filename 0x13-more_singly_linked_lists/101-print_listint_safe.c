#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: a pointer to the head.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *p = NULL;

	if (!head)
		exit(98);

	p = head;
	while (p)
	{
		if (p->next == NULL)
		{
			printf("-> [%p] %d\n", (void *)p, p->n);
			count++;
		}
		else
		{
			printf("[%p] %d\n", (void *)p, p->n);
			count++;
		}
		p = p->next;
	}
	return (count);
}
