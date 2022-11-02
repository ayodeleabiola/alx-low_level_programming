#include "main.h"
/**
 *_sqrt_recursion - return the natural square of a number
 *@n: number to be used
 *
 *Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
/**
 *_sqrt - returns the square root of a number
 *@n: test number
 *
 *@x: square number
 *Return: Root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
