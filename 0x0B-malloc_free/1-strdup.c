#include<stdlib.h>
#include "main.h"
/**
* _strdup - duplicates the str into s
* @str: string to be duplicated
*
* Return: pointer to newly allocated space in memory
*/

char *_strdup(char *str)
{
	char *s;
	unsigned int len, i;

	i = 0;
	len = 0;

	if (str == NULL)

	return (NULL);


	while (str[len])

	len++;

	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)

	return (NULL);

	while ((s[i] = str[i]) != '\0')
		i++;
	return (s);

}
