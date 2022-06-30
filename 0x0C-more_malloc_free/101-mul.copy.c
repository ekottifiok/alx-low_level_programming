#include "main.h"



int main(int argc, char *argv[])
{
    int answer = 0, i, j, limit = 3, iteration = 0, character = 0;


    if (argc != limit)
    {    
        printf("Error\n");
        return (1);
    }

    for (i = 1; i < argc; i++)
    {
        
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            iteration++;
            character = argv[i][j]-48;
            
            if (character >= 0 && character <= 9)
                continue;
            return (1);
        }
        iteration = 0;
        j = 0;
    }
    
    printf("There are both integers\n");
    printf("%d\n", atoi(argv[1])+ atoi(argv[2]));
    return (0);
}
