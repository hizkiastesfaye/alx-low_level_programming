#include "main.h"
/**
 * pow_recursion - function
 * @n: param
 * @num: root of n
 * Return: return intger value
 */
int pow_recursion(int n, int num)
{
	if (num == n)
		return (-1);
	else if (n % num == 0 && num * num == n)
		return (num);
	return (pow_recursion(n, num + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (pow_recursion(n, 2));
}
