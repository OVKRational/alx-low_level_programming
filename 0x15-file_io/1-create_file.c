#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdk;
	int nlet;
	int ovk;

	if (!filename)
		return (-1);

	fdk = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdk == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	ovk = write(fdk, text_content, nlet);

	if (ovk == -1)
		return (-1);

	close(fdk);

	return (1);
}
