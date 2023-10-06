#include "main.h"
#include <stdio.h>

/**
*handle_errors - a program that checks if files can be opened
*@dest: file to
*@source: file from
*@argv: argument vector
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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
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
	int source, dest, err_close;
	ssize_t nchars, new;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp source dest");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_errors(source, dest, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(source, buf, 1024);
		if (nchars == -1)
			handle_errors(-1, 0, argv);
		new = write(dest, buf, nchars);
		if (new == -1)
			handle_errors(0, -1, argv);
	}
	err_close = close(source);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	err_close = close(dest);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
    }
	return (0);
}