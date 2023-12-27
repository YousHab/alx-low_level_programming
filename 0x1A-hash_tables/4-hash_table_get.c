#include "hash_tables.h"

/**
 * hash_table_get - to retrieve a value associated with a key.
 * @ht: the hash table.
 * @key: the key.
 *
 * Return: the value associated, NULL if the key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	char *key_dup = strdup(key);
	hash_node_t *p;

	hash_index = key_index((const unsigned char *) key_dup, ht->size);
	p = ht->array[hash_index];
	while (p)
	{
		if (strcmp(p->key, key_dup) == 0)
			return (p->value);
		p = p->next;
	}
	return (NULL);
}
