#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file and prints
 * its contents to STDOUT.
 * @filename: A name of the text file to be read.
 * @letters: The number of letters to read from the file.
 * Return: The actual number of bytes read and printed on success,
 *         0 when the function fails or when the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t f;
ssize_t m;
ssize_t k;

f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buf = malloc(sizeof(char) * letters);
k = read(f, buf, letters);
m = write(STDOUT_FILENO, buf, k);

free(buf);
close(f);
return (m);
}

