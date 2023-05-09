#include "main.h"

/**
 * read_textfile - a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid;
	ssize_t newread, newryt;
	char *buffa;

	if (!filename)
		return (0);

	fid = open(filename, O_RDONLY);

	if (fid == -1)
		return (0);

	buffa = malloc(sizeof(char) * (letters));
	if (!buffa)
		return (0);

	newread = read(fid, buffa, letters);
	newryt = write(STDOUT_FILENO, buffa, newread);

	close(fid);

	free(buffa);

	return (newread);
}
