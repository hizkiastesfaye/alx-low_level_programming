#include "main.h"

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 11; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
