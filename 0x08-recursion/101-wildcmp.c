#include <stdio.h>

void wildcmp_wrapper(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*s2 + 1 != '*')
        {

        }
    }
}

int wildcmp(char *s1, char *s2)
{
    if (*s2 == '\0' || *s1 == '\0')
    {
        return (1);
    }
    if (*s2 != '*')
    {
        if (*s2 == *s1)
        {
            wildcmp(s1+1, s2+1);
        }

    }
    if (*s2 == '*')
    {
        wildcmp(s1, s2+1);
    }
    
}

int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
