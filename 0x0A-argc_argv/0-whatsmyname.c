#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line
 * @argc: The number of arguments
 * @argv: The on dimensional array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
