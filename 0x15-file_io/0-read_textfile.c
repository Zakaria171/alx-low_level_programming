#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letter to be read and printed
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *buff;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, buff, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(buff);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buff, lenr);
	free(buff);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
