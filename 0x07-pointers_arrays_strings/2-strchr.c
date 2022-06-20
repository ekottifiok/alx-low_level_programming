#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: input character
 * @c: input character
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
  int buffer;

  while (*s != '\0')
  {
		buffer = *s;
    if (c == buffer)
    {
      break;
    }
    s++;
  }

  if (buffer == '\0')
  {  
    return (NULL);
  }

  return (s);
}
