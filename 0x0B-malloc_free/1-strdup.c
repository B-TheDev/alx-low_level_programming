#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *str1;
	int i, r;

	if (str == NULL)
	{
		return(NULL);
		i = 0;
	}
	while (str[i] != '\0')
	{
		i++;
		str1 = malloc(sizeof(char) * (i + 1));
	}
	if (str1 == NULL)
	{
		return (NULL);
	}
	
		for (r = 0; str[r]; r++)
		str1[r] = str[r];

		return (str1);

}
