#include "main.h"

int cp(char *file_from, char *file_to)
{
    int descriptor_int, read_int, write_int, text_number;
    char *text_content;

    if (!file_from)
    {
        printf("Error: Can't read from file %s", file_from);
        exit(98);
    }
    if (!file_to)
    {    
        printf("Error: Can't write from file %s", file_to);
        exit(99);
    }
    read_int = open(file_from, O_RDWR);
    if (text_content < 0)
    {
        printf("Error: Can't read from file %s", file_from);
        return (-1);
    }
    write_int = open(file_from, O_WRONLY);
    if (write_int < 0)
    {
        printf("Error: Can't write from file %s", file_to);
        exit(99);
    }

    close(descriptor_int);

    de
    return (1);
}

int main(int argc, char const *argv[])
{
    int copy_res;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    copy_res = cp(argv[1], argv[2]);
    if (copy_res != 1)
        printf("The copy failed");

    return 0;
}
