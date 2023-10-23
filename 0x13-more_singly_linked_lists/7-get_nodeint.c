#include "lists.h"
/**
 * listint_len - prints the number of elements in a linked listint_t list
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the length of the list.
 */

size_t lengthlist(listint_t *h)
{
	int count = 0;
	listint_t *ptr = NULL;

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
	size_t n;

	if (head == NULL)
		return (NULL);

	n = lengthlist(head);
	if (index > n || index < 0)
		return (NULL);

	p = head;

	for (i = 0; i < index; i++)
	{
		p = p->next;
	}
	return (p);
}
