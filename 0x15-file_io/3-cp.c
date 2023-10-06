#include "main.h"
#include <stdio.h>

/**
*main - a program that checks code
*@argv: argument vector
*@argc: argument count
*Return: nothing
*/

void handle_errors(int source, int dest, char *argv[])
{
if (source == -1)
{
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (dest == -1)
{
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
exit(98);
}
}

int main(int argc, char *argv[])
{
int source, dest;
ssize_t r, wr;
int source_close, dest_close;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
exit(98);
}
source = open(argv[1], O_RDONLY);
handle_errors(source, 0, argv[1]);
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
handle_errors(0, dest, argv[2]);

while ((r = read(source, buffer, 1024)) > 0)
{
wr = write(dest, buffer, r);
handle_errors(0, wr, argv[2]);
handle_errors(r, 0, argv[1]);
}
source_close = close(source);
if (source_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", source);
exit(100);
}
dest_close = close(dest);
if (dest_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", dest);
exit(100);
}
return (0);
}

