#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head : the head of the list.
 *
 * Return: the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *tmp = NULL;

	if (!head || !*head)
		return (NULL);
	p = *head;
	head = NULL;
	while (p)
	{
		tmp = p->next;
		p->next = *head;
		*head = p;
		p = tmp;
	}
	return (*head);
}
