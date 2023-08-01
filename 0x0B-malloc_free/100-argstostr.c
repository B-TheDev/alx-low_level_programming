#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate strings from a double pointer array
 * @ac: number of strings
 * @av: double pointer array of strings
 * Return: pointer to concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}

	/** Add space for the newline characters and null-terminator*/
	l += ac + 1;

	str = malloc(sizeof(char) * (l));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}

		/** Add newline after each string*/
		str[r] = '\n';
		r++;
	}

	/** Add null-terminator at the end*/
	str[r] = '\0';

	return (str);
}
