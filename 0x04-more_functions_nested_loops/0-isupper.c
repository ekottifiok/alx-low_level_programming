#include "main.h"

int _isupper(int c)
{
    char d = c;
    if (d > 'A' || d < 'Z')
    {
        return 1;
    }
    return 0;
}