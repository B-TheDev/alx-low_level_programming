#include "main.h"
/**
 * print_rev - function to reverse.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longstr = 0;
	int o;

	while (*s != '\0')
	{
		longstr++;
		s++;
	}
	s--;
	for (o = longstr; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
