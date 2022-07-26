#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int append_int, descriptor_int, text_number;

	if (!filename || !text_content)
		return (-1);
	descriptor_int = open(filename, O_WRONLY | O_APPEND);
	if (descriptor_int < 0)
	{
		close(descriptor_int);
		return (-1);
	}
	for (text_number = 0; text_content[text_number] != '\0'; text_number++)
	;
	append_int = write(descriptor_int, text_content, text_number);
	if (append_int != text_number)
	{	
		close(descriptor_int);
		return (-1);
	}	
	close(descriptor_int);
	return (1);
}
