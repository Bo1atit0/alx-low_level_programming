#include<stdio.h>
/**
 * main - all characters in base 16
 * Return: 0
 */
int main(void)
{
	char num;
	char low;

	for (num = '0'; num <= '9'; num++)
	{
		putchar (num);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar (low);
	}
		putchar ('\n');

	return (0);
}
