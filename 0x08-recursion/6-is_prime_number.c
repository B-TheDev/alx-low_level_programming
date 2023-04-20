#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the 
 * input integer is a prime number, otherwise return 0
 * @n: number to be evaluated
 *
 * Return: 1 if n is a prime number, otherwise 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}
/**
 * _prime - checks prime recursively_
 * @n: number to check
 * @i: used for iteration
 *
 * Return: 1 if it is a prime number or 0 if it is not.
 */
int _prime(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (_prime(n, i - 1));

}

