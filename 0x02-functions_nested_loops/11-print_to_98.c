#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - list order
 * @n: param1
 * return: no return
 */


void print_to_98(int n)
{
	int b;

	if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else
				printf("%d\n", b);
		}
	}
	else
	{
		for (b = n; b <= 98; b++)
		{
			if (b != 98)
				printf("%d, ", b);
			else
				printf("%d\n", b);
		}
	}
}
