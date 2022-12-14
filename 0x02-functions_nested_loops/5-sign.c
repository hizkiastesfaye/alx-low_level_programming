#include "main.h"

/**
 * print_sign - to print signs
 * @n: param1
 * Description: no way to do it
 * Return: sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

