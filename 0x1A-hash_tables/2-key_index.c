#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 *
 * @key: the string to be hashed
 * @size: size of the array of the hash table
 * Return: unsigned long int index to be stored in the list
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
