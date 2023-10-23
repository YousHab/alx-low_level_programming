#include "main.h"
/**
 * sum_listint - function that returns teh sum of all data of a linked list
 *
 * @head: the head.
 *
 * Return: the sum, 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = NULL;

	if (!head)
		return (0);

	p = head;
	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
