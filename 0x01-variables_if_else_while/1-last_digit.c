#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - This program will assign a random number to the variable n
 *Return: 0
 */
int main(void)
{
	int n;
	int Ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ld = n % 10;

	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, Ld);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Ld);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, Ld);
	}
	return (0);
}
