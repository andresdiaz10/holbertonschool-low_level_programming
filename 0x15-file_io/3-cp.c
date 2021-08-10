#include "main.h"

/**
 * shut_fd - close the file descriptor
 * @file_descriptor: file descriptor to close
 *
 */

void shut_fd(int file_descriptor)
{
	int shut;

	shut = close(file_descriptor);
	if (shut == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * buffer - allocate 1024 bytes small call
 * @file: file storing chars
 *
 * Return: allocated buffer
 */
char *buffer(char *file)
{
	char *str;

	str = malloc(sizeof(char) * 1024);
	if (!(str))
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (str);
}

/**
 * main - copie content of a file to another file
 * @argc: number of arguments
 * @argv: array arguemnts
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *str;
	ssize_t since;
	ssize_t at;
	ssize_t read_b;
	ssize_t write_b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	since = open(argv[1], O_RDONLY);
	str = buffer(argv[2]);
	read_b = read(since, str, 1024);
	at = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (read_b == -1 || since == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(str);
			exit(98);
		}
		write_b = write(at, str, read_b);
		if (write_b == -1 || at == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(str);
			exit(99);
		}
		read_b = read(since, str, 1024);
		at = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_b > 0);
	free(str);
	shut_fd(since);
	shut_fd(at);
	return (0);
}
