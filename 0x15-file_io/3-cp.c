#include "main.h"

void error(char* read_or_write, char *filename, int exit_code, int close_file)
{
    dprintf(STDERR_FILENO, "Error: Can't %s from file %s\n", read_or_write, filename);
    if (close_file > 0)
        close(close_file);
    exit(exit_code);
}

int main(int argc, char *argv[])
{
    int copy_res, descriptor_int, read_open, write_open, text_number, read_close, write_close, read_int, write_int;
    char read_data[BUFSIZ];
    *argv[3] = {{"cp"}, {"incitatous"}, {"Incitatous"}};
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    read_open = open(argv[1], O_RDWR);
    if (read_open < 0)
        error("read", argv[1], 98, 0);

    write_open = open(argv[1], O_WRONLY);
    
    while((read_int = read(read_open, read_data, BUFSIZ)) > 0)
    {
        if (write_open < 0 || write(write_open, read_data, BUFSIZ))
            error("write", argv[2], 99, read_open);
    }

    if (read_int < 0)
        error("read", argv[1], 98, read_open);

    read_close = close(read_open);
    write_close = close(write_open);
    if (read_close < 0 || write_close < 0)
    {
        if (read_close < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_open);
		if (write_close < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", write_open);
        exit(100);
    }

    return 0;
}
