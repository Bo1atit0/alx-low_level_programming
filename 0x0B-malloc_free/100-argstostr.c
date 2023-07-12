#include<stdlib.h>
#include "main.h"

/**
* argstostr -  function that concatenates all the arguments of your program.
*@ac: the address of the two dimensional grid
*@av: row of array
*
*Return:  a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, len = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
				len++;
			}
	len++;

		s = (char *)malloc(len * sizeof(char));

			if (s == NULL)
			{
				return (NULL);
			}

		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				s[k++] = av[i][j];
		}
		s[k++] = '\n';
}
	s[k] = '\0';
	return (s);
}
