#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to calc the square root of
 *
 * Return: the square root as the result
 */
int _sqrt_recursion(int n)
{
        if (n < 0)
        {
                return (-1);
        }
        return (sqrt_r(n, 0));
}
int sqrt_r(int n, int i)
{
        if (i * i > n)
        {
                return (-1);
        }
        if (i * i == n)
        {
                return (i);
        }
        return (sqrt_r(n, i + 1));
}
