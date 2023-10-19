#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 *
 * @head: the head of the list.
 * @str: to be duplicated and added to the node.
 *
 * Return: the adress of the new element, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *n;
	n = *head;

	p = malloc(sizeof(list_t));
	if (!head || !p)
		return (NULL);
	if (str)
	{
		p->str = strdup(str);
		if (!p->str)
		{
			free(p);
			return (NULL);
		}
		p->len = _strlen(p->str);
	}

	if (n)
	{
		while (n->next)
			n = n->next;
		n->next = p;
	}
	else
		*head = n;
	return (p);
}
