#include "main.h"

/**
 *append_text_to_file - function that appends text to the end of a file
 *@text_content: text to be appended
 *@filename: name of file.
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
    return (-1);
}

}