#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - A function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: A pointer to a character.
 * @letters: A size_t.
 *
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *bfr;
ssize_t read_ltrs, write_ltrs;

if (filename == NULL)
return (0);

fd = open(filename, O_RDWR);
if (fd == -1)
return (0);

bfr = malloc(sizeof(ssize_t) * letters);
if (bfr == NULL)
return (0);

read_ltrs = read(fd, bfr, letters);
if (read_ltrs == -1)
return (0);

write_ltrs = write(STDOUT_FILENO, bfr, read_ltrs);
if (read_ltrs != write_ltrs || write_ltrs == -1)
return (0);

free(bfr);
close(fd);

return (write_ltrs);
}
