#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int a;

	/**
	 *  Return: value of the last digit
	 */
	a = c % 10;

	if (a < 0)
	{
		a = -a;
		return (a);
	}

	else
	{
		return (a);
	}
}
