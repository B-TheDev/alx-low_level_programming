#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: the number of bytes to be returned from accept
 * @accept: consist only of bytes from accept
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
				}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
