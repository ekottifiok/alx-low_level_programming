#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor_int, read_int;
	char *read_chars;

	if (filename == NULL)
		return (0);
	descriptor_int = open(filename, O_RDONLY);
	if (descriptor_int == -1)
		return (0);
	read_chars = malloc(sizeof(char) * letters);

	/**
	 * checks that the malloc executed successfully
	 */
	if (!read_chars)
		return (0);

	read_int = read(descriptor_int, read_chars, letters);
	if (read_int < 0)
	{
		free(read_chars);
		return (0);
	}
	read_chars[read_int] = '\0';
	close(descriptor_int);

	descriptor_int = write(STDOUT_FILENO, read_chars, read_int);
	if (descriptor_int < 0)
	{
		free(read_chars);
		return (0);
	}
	free(read_chars);
	return (descriptor_int);
}
