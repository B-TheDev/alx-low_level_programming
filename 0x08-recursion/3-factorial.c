/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: number the factorial will be from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n > 0)
		return (n *factorial(n - 1));
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
}