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
		putchar (low);
	}

	if (low != 'q' && low != 'e')
	{
		putchar ('\n');
	}

	return (0);
}
