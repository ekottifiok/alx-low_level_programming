#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
    int i, j, c, flag;

    for (i = 0, c = 0; s[i] != '\0'; i++)
    {
        flag = 0;
        for (j = 0; accept[j] != '\0';j++)
        {
            if (s[i] == accept[j])
            {
                c++;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return (c);
    }
    return (0);
}
