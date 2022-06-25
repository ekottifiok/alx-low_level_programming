#include "main.h"



int main(int argc, char const *argv[])
{
    int i, result; 

    if (argc > 2)
    {
        for (i = 2; i < argc; i++)
        {
            if (*argv[i] >= 0 && *argv[i] <= 9)
            result = argv[i];
        }
        
    }
    
    return 0;
}
