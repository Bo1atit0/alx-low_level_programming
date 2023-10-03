#include "main.h"

/**
 *create_file - a program that creates a file
 *@text_content: a NULL terminated string to write to the file
 *@filename: name of file
 *Return: 1 if successful, -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
int fd, wr, i;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}

if (text_content == NULL)
{
text_content = "";
}
for (i = 0; text_content[i]; i++);
{
wr = write(fd, text_content, 1);
}
if (wr == -1)
{
return (-1);
}
close (fd);
return (1);
}
