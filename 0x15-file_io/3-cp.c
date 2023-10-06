#include "main.h"
#include <stdio.h>

/**
 * handle_errors - for error messages in code
 * @source: source
 * @dest: destination
 * @argv: argument vector
 * Return: nothing
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
exit(99);
}
}

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
exit(97);
}
source = open(argv[1], O_RDONLY);
handle_errors(source, 0, argv);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
handle_errors(source, dest, argv);

r = 1024;
while (r == 1024)
{

r = read(source, buffer, 1024);
if (r == -1)
handle_errors(-1, 0, argv);

wr = write(dest, buffer, r);
if (wr == -1)
handle_errors(0, -1, argv);

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
dprintf(STDERR_FILENO, "Error: Can't close fd %d", source);
exit(100);
}
return (0);
}