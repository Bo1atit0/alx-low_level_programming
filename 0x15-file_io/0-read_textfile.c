#include "main.h"

/**
*read_textfile - a program that reads a text file and prints
*it to  standard output.
*
*@letters: numbers of letters to be printed.
*
*@filename: name of file.
*
*Return: number of characters printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int o;
ssize_t r, w;
char *buffer;

if (filename == NULL)
{
return (0);
}

o = open("filename", O_RDONLY);
if (o == -1)
{
return (0);
}
buffer = (char *)malloc(letters * sizeof(char));
if (buffer == NULL)
{
return (0);
}
r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);

close(o);
free(buffer);
return (w);

}

