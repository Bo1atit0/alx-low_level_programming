#include <stdio.h>
#include "main.h"

/*
 * main - multiplies tow numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if fail or 0 if successful
 */

int sum;
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = _atoi(argv[1]) * _atoi(argv[2]);
	{
	printf("%d\n", sum);
	}
	return(0);
}
