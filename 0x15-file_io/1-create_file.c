#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int descriptor_int, write_int, text_number;

	descriptor_int = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!filename || descriptor_int < 0 || !text_content)
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
