#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: its works -1
 *	otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t text_size = 0;
	ssize_t open_b;
	ssize_t write_b;

	if (!(filename))
		return (-1);
	if (text_content)
	{
		for (text_size = 0 ; text_content[text_size] ;)
			text_size++;
	}
	open_b = open(filename, O_WRONLY | O_APPEND);
	write_b = write(open_b, text_content, text_size);
	if (write_b == -1 || open_b == -1)
		return (-1);
	close(open_b);
	return (1);
