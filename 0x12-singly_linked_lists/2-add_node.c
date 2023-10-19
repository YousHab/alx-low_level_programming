#include "lists.h"
/**
 * list_t *add_node - function that adds a new node at the beginning
 * of a list.
 *
 * @head: the head of the list
 * @str: to be added in the node.
 *
 * Return: a pointer to the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

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
	p->next = *head;
	*head = p;
	return (p);
}
