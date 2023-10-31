#include "main.h"

/**
 * error_file - program that copies the content of a file to another file
 * @file_from: file source
 * @file_to: file destination
 * @argv: arguments
 *
 * Return: void
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - main function
 * @argc: no of arguments
 * @argv: vector arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, _error;
	ssize_t n, p;
	char s[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, s, 1024);
		if (n == -1)
			error_file(-1, 0, argv);
		p = write(file_to, s, n);
		if (p == -1)
			error_file(0, -1, argv);
	}
	_error = close(file_from);
	if (_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	_error = close(file_to);
	if (_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
