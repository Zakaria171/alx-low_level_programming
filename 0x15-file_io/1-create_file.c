#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of file
 * return: 1 or -1
 */
create_file(const char *filename, char *text_content)
{
	int file_d, nletter, rwr;

	if (!filename)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletter = 0; text_content(nletters); nletters++)
		;
	rwr = write(file_d, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(file_d);
	return (1);
}
