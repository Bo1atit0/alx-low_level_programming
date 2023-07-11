#include<stdlib.h>


/**
* create_array - function that creates an array of chars
* malloc - allocate memory
* @size: size of the array
* @c: elements of the array
*
* Return: a pointer to the first element of the  array
*/

char *create_array(unsigned int size, char c)
{
	char *ptarr;
	unsigned int count;

	ptarr = (char *) malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
	ptarr[count] = c;

	return (ptarr);
}
