#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: file content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int n, m, p;

	if (!filename)
		return (-1);

	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (n == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (m = 0 ; text_content[m] ; m++)
		;
	p = write(n, text_content, m);
	if (p == -1)
		return (-1);
	close(n);

	return (1);
}
