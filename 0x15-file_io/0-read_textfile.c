#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to the file name
 * @letters: number to letters to print and read
 *
 * Return: filename NULL or fail 0
 *	otherwise - number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t open_b;
	ssize_t read_b;
	ssize_t write_b;

	if (!(filename))
		return (0);
	str = (char *) malloc(sizeof(char) * letters);
	if (!(str))
		return (0);
	open_b = open(filename, O_RDONLY);
	read_b = read(open_b, str, letters);
	write_b = write(STDOUT_FILENO, str, read_b);
	free(str);
	if (open_b == -1 || read_b == -1 || write_b == 1 || write_b != read_b)
		return (0);
	close(open_b);
	return (write_b);
}
