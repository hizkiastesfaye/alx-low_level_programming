#include "main.h"

/**
 * main - print _putchar
 * Return: zero
 */
int main(void)
{
	char a[] = "_putchar";
	int b;
	int c = sizeof(a) / sizeof(a[0]);

	for (b = 0; b < c - 1; b++)
	{
		_putchar (a[b]);
	}

	_putchar('\n');
	return (0);
}
