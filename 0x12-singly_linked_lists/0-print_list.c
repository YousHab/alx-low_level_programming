#include "lists.h"
/**
 * _strlen - claculate length of a string
 * @s: a ponter to the string
 * Retrun: the length.
 */
 

int _strlen(char *s)
{
	int count = 0;
	if (s == NULL)
		return (0);
	while(*s++)
	{
		count++;
	}
	return (count);
}

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
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
