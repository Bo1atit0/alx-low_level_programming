#include <stdio.h>
#include <stdlib.h>

/**
* main - print minimum number of
* coin to make change
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int cents = 0;
	int m = 0;

	if (argc <= 1)
	{
	printf("Error\n");
	return (1);
	}
	if (cents < 0)
	{
	printf("0\n");
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
	if (cents >= 25)
	cents -= 25;

	else if (cents >= 10)
	cents -= 10;

	else if (cents >= 5)
	cents -= 5;

	else if (cents >= 2)
	cents -= 2;

	else if (cents >= 1)
	cents -= 1;

	m += 1;
	}
	printf("%d\n", m);

	return (0);
}
