#include "main.h"
/**
 * _pow_recursion - function which return power
 * @x: param base
 * @y:param exponent
 * Return: return value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
