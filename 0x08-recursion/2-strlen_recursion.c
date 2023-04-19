#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: The string to be measured.
 *
 * Return: strnlen - Length of the string.
 */
int _strlen_recursion(char *s)
{
	int strnlen = 0;
	if (*s)
	{
		strnlen++;
		strnlen += _strlen_recursion(s + 1);
	}
	return (strnlen);
}
