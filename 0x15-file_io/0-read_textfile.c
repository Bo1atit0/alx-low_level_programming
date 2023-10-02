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
char ch;
int count = 0;
char *buffer;
size_t readfile;
FILE *fp = NULL;

if (filename == NULL)
{
return (0);
}
fp = fopen("filename", "r");
if (fp == NULL)
{
return (0);
}
buffer = (char *)malloc(letters * sizeof(char));
if (buffer == NULL)
{
return (0);
}
readfile = fread(buffer, sizeof(char), letters, fp);

while ((ch = fgetc(fp)) != EOF)
{
putchar(ch);
count++;
}
fclose(fp);
return (count);
}

