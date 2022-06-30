#include "main.h"

/**
 * _calloc - void pointers
 * 
 * @nmemb: number of members
 * @size: size of array
 * Return: void* 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!(nmemb) || !(size))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!(ptr))
		return (NULL);	
	
	return (ptr);
}
