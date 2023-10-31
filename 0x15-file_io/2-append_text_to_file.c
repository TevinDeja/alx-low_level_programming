#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: file content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n, m, p;

	if (!filename)
		return (-1);

	n = open(filename, O_WRONLY | O_APPEND);
	if (n == -1)
		return (-1);
	if (text_content)
	{
		for (m = 0 ; text_content[m] ; m++)
			;
		p = write(n, text_content, m);
		if (p == -1)
			return (-1);
	}
	close(n);
	return (1);
}
