#include "main.h"
#include <stdio.h>

/**
 * is_palindrome -  
 * 
 * @param s 
 * @param counter 
 * @param t 
 * @return char* 
 */

char *is_palindrome_wrapper(char *s, int counter, char *t);

int is_palindrome(char *s)
{
    int i, j;
    char *palindrome, *buffer;

    for (j = 0; s[j] != '\0'; j++)
    {
        continue;
    }
    j--;
    palindrome = is_palindrome_wrapper(s+j, j, buffer);
 
    
    for (j = 0; palindrome[j] != '\0'; j++)
    {
        if (palindrome[j] == s[j])
            continue;
        break;
    }
    if (palindrome[j] == '\0')
        return (1);
    return (0);
    
}

/**
 * is_palindrome_wrapper - reverses the characters 
 * 
 * @s: original text
 * @counter: keeps count of the iteration
 * @t: buffer where the reversed string is stored
 * Return: returns a pointer to the reverse
 */

char *is_palindrome_wrapper(char *s, int counter, char *t)
{
    if (counter >= 0)
	{
        *t = *s;
		is_palindrome_wrapper(s-1, counter-1, t+1);
	}
    return (t);
}


int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}