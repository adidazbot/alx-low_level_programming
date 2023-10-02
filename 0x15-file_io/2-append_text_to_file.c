#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int adida, bytes_len = 0;
	int reader;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (bytes_len = 0; text_content[bytes_len];)
		{
			bytes_len++;
		}
	}
	adida = open(filename, O_WRONLY | O_APPEND);
	if (adida == -1)
	{
		return (-1);
	}
	reader = write(adida, text_content, bytes_len);
	if (reader == -1)
	{
		close(adida);
		return (-1);
	}
	close(adida);
	return (1);
}
