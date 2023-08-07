#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: A pointer to a character.
 * @text_content: A pointer to a character.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd, i;
int write_ltrs;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

i = 0;
if (text_content != NULL)
{
while (text_content[i] != '\0')
{
i++;
}
write_ltrs = write(fd, text_content, i);
if (write_ltrs == -1)

return (-1);
}
close(fd);

return (1);
}
