#include "main.h"
#include <stdio.h>
/**
 * _putchar erites the character c to standard output
 * 
 * Return: 1 - On success
 * -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
