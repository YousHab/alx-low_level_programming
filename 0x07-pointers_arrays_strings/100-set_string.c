#include "main.h"

/**
 * set_string - This function sets the calue of a pointer to a char.
 *
 * @s: a pointer to pointer te be set.
 * @to: string to set.
 *
 * Return: Nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
