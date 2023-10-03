#include "main.h"
#include <stdio.h>

/**
*main - a program that checks code
*@argv: argument vector
*@argc: argument count
*Return: nothing
*/

int main(int argc, char *argv[])
{
int source, dest;
ssize_t r, wr;
int source_close, dest_close;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
exit (98);
}

source = open(argv[1], O_RDONLY);
r = read(source, buffer, 1024);
if (source == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit (98);
}

dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
wr = write(dest, buffer, r);
if (dest == -1 || wr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit (98);
}

source_close = close(source);
if (source_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", source);
}
dest_close = close(dest);
if (dest_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", dest);
}
return (0);
}
