#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: key.
 * @value: the value.
 * Return: 1 if it succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index;
	hash_node_t *new_node;
	char *value_dup, *key_dup;

	if (ht == 0)
		return (0);
	key_dup = strdup(key);
	if (!key_dup)
		return (0);

	value_dup = strdup(value);
	if (!value_dup)
		return (0);

	hash_index = key_index((const unsigned char *)key_dup, ht->size);

	if (ht->array[hash_index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = key_dup;
		new_node->value = value_dup;
		new_node->next = NULL;
		ht->array[hash_index] = new_node;
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = key_dup;
		new_node->value = value_dup;
		new_node->next = ht->array[hash_index];
		ht->array[hash_index] = new_node;
	}
	return (1);
}
