#include "main.h"

/**
 * create_file - creates a file and stores a text inside
 *
 * @filename: file name to be created
 * @text_content: text to be stored inside
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int descriptor_int, write_int, text_number;

	if (text_content == NULL || !text_content)
		return (1);

	descriptor_int = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!filename || descriptor_int < 0)
	{
		close(descriptor_int);
		return (-1);
	}
	for (text_number = 0; text_content[text_number] != '\0'; text_number++)
		;

	write_int = write(descriptor_int, text_content, text_number);
	if (write_int != text_number)
		return (-1);

	close(descriptor_int);
	return (1);
}
