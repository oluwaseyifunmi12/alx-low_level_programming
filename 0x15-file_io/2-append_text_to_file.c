#include "main.h"

/**
 * append_text_to_file - funtion that appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc;
	int num;
	int bwrite;

	if (filename == NULL)
		return (-1);

	fdesc = open(filename, O_WRONLY | O_APPEND);

	if (fdesc == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;

		bwrite = write(fdesc, text_content, num);

		if (bwrite == -1)
			return (-1);
	}

	close(fdesc);

	return (1);
}
