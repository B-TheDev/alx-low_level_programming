#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: Pointer to the string to check.
 *
 * Return: 1 if it is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Calculate the length of a string recursively.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Check if a string is a palindrome recursively.
 * @s: Pointer to the string to check.
 * @i: Iterator.
 * @len: Length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

