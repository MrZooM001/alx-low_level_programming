#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * append_text_to_file - A function that appends text
 * at the end of a file.
 * @filename: A pointer to a character.
 * @text_content: A pointer to a character.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i;
int write_ltrs;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
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
if (write_ltrs < 0)
return (-1);
}
close(fd);

return (1);
}
