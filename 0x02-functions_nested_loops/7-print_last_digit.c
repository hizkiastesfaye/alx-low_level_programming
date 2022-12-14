#include "main.h"

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
		_putchar(a + '0');
		return (a);
	}

	else
	{
		_putchar(a + '0');
		return (a);
	}
}
