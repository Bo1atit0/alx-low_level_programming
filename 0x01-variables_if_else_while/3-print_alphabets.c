#include<stdio.h>
/**
 * main - alphaBETS
 * Return: 0
 */
int main(void)
{
	char low;
	char up;

	for (low = 'a'; low <= 'z'; low++)
	{
	for (up = 'A'; up <= 'Z'; up++)
	{

		putchar (low);
		putchar (up);
		putchar ('\n');
	}
	}

	return (0);
}
