#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdk;
	int nlet;
	int ovk;

	if (!filename)
		return (-1);

	fdk = open(filename, O_WRONLY | O_APPEND);

	if (fdk == -1)
		return (-1);

	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;

		ovk = write(fdk, text_content, nlet);

		if (ovk == -1)
			return (-1);
	}

	close(fdk);

	return (1);
}
