#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - function that concatenates all arguments of the program.
 * @ac: number of arguments.
 * @av: arguments.
 *
 * Return: NULL if ac == 0 or av == NULL or if it fails
 * a pointer to a new string otherwise.
 */

char *argstostr(int ac, char **av)
{
	int i, j, length = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			length++;
			j++;
		}
		length++;
		i++;
	}

	new_string = malloc((sizeof(char) * size) + 1);

	if (new_string == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			new_string[k] = new_string[i][j];
			j++;
			k++;
		}
		new_string[k] = '\n';
		k++;
		i++;
	}
	new_string[k] = '\0';
	return (new_string);
}
