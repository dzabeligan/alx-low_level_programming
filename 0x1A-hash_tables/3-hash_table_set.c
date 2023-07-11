#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_table;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_hash_table = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_hash_table == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_hash_table->key = strdup(key);
	if (new_hash_table->key == NULL)
	{
		free(new_hash_table);
		return (0);
	}
	new_hash_table->value = value_copy;
	new_hash_table->next = ht->array[index];
	ht->array[index] = new_hash_table;

	return (1);
}
