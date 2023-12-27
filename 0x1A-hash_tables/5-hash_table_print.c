#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			printf("\'%s\': \'%s\'", p->key, p->value);
			p = p->next;
			if (p)
				printf(", ");
		}
		if (i < ht->size - 1 && ht->array[i + 1] != NULL)
			printf(", ");
	}
	printf("}");
}
