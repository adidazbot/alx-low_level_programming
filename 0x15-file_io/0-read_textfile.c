#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- the func that reads text file print to STDOUT.
 * @filename: text file being read or file
 * @letters: total number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t ffd;
	ssize_t ww;
	ssize_t tt;

	ffd = open(filename, O_RDONLY);
	if (ffd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tt = read(ffd, buff, letters);
	ww = write(STDOUT_FILENO, buff, tt);

	free(buff);
	close(ffd);
	return (ww);
}

