#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: filename
 * @letters: no of letters
 *
 * Return: actual number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t m, p;
	char *s;

	if (!filename)
		return (0);

	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	s = malloc(sizeof(char) * (letters));
	if (!s)
		return (0);

	m = read(n, s, letters);
	p = write(STDOUT_FILENO, s, m);
	close(n);
	free(s);

	return (p);
}
