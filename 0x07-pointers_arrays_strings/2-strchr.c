include "main.h"
/**
 * _strchr -  a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 * @s: the string
 * @c: first occurence of the character c
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
