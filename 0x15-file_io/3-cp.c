#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"
#define FILE_PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Start point of the program.
 * @argc: An integer as count of passed arguments.
 * @argv: A pointer to a character as string array.
 *
 * Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
char bfr[1024];
ssize_t data;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, FILE_PERMISSIONS);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

while ((data = read(fd_from, bfr, 1024)) > 0)
{
if (write(fd_to, bfr, data) != data)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (data == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
fd_from = close(fd_from);
if (fd_from)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
fd_to = close(fd_to);
if (fd_to)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

return (EXIT_SUCCESS);
}
