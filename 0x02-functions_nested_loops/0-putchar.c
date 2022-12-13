#include "main.h"

int main(void)
{
	char a[] = "_putchar";
	int b;
	int c = sizeof(a) / sizeof(a[0]);

	for (b = 0; b < c; b++)
	{
		_putchar (a[b]);
	}

	_putchar('\n');
	return (0);
}
