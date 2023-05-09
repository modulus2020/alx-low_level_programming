#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid;
	ssize_t newrd, nwryt;
	char *buffa;

	if (!filename)
		return (0);

	fid = open(filename, O_RDONLY);

	if (fid == -1)
		return (0);

	buffa = malloc(sizeof(char) * (letters));
	if (!buffa)
		return (0);

	newrd = read(fid, buffa, letters);
	nwryt = write(STDOUT_FILENO, buffa, newrd);

	close(fid);

	free(buffa);

	return (nwryt);
}
