#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a string, in reverse, followed by a new line..
 * @a: input integer.
 * @n: input integer
 * Return: no return.
 */

char *_strcpy(char *dest, char *src)
{
    if (dest == NULL) {
        return NULL;
    }

    char *ptr = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return ptr

}