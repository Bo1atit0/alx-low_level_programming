#include "main.h"

int square_recursion(int n, int res);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root of
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);

	return (square_recursion(n, 0));
}

/**
 * square_recursion - recurses to find the natural square
 * root of number
 * @n: number to calculate square root of
 * @res: iterator
 * Return: resulting square root
 */

int square_recursion(int n, int res)
{

	if (res * res > n)

	return (-1);

	if (res * res == n)

	return (res);

	return (square_recursion(n, res + 1));
}

