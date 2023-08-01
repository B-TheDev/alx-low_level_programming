#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer to duplicated string or NULL on failure
 */
char *_strdup(char *str)
{
	char *str1;
	int i, r;

	if (str == NULL)
	return (NULL);

    /** Calculate the length of the input string*/
	for (i = 0; str[i] != '\0'; i++)

    /** Allocate memory for the duplicated string*/
	str1 = malloc(sizeof(char) * (i + 1));

	if (str1 == NULL)
	return (NULL);

    /** Copy the characters from str to str1*/
	for (r = 0; r <= i; r++)
	str1[r] = str[r];

	return (str1);
}

