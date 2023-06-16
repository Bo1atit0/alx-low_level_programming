#include<stdio.h>
/**
 * main - alphabt
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{

	if (low != 'q' && low != 'e')
	{
		putchar (low);
	}
	}
		putchar ('\n');

	return (0);
}
