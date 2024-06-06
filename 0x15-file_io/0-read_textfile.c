#include "main.h"

/**
 * read_textfile - function that reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters to be printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fdesc;
	ssize_t bread, bwrite;
	char *buffs;

	if (filename == NULL)
		return (0);

	fdesc = open(filename, O_RDONLY);

	if (fdesc == -1)
		return (0);

	buffs = malloc(sizeof(char) * (letters));

	if (buffs == NULL)
		return (0);

	bread = read(fdesc, buffs, letters);

	bwrite = write(STDOUT_FILENO, buffs, bread);

	close(fdesc);

	free(buffs);

	return (bwrite);
}
