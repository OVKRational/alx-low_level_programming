#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fbk;
	ssize_t ovk, eva;
	char *ken;

	if (!filename)
		return (0);

	fdk = open(filename, O_RDONLY);

	if (fdk == -1)
		return (0);

	ken = malloc(sizeof(char) * (letters));
	if (!ken)
		return (0);

	ovk = read(fdk, ken, letters);
	eva = write(STDOUT_FILENO, ken, ovk);

	close(fdk);

	free(ken);

	return (eva);
}
