#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: memory area pointed to
 * @b: the constant byte
 * @n: number of bytes to be changed
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
