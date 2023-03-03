#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, ab, h, i, j, k, l = 0, v, y = 0, z;

	for (i = 0; *(n1 + i); i++)
		;
	for (j = 0; *(n2 + j); j++)
		;
	if (i >= j)
		a = i;
	else
		a = j;
	if (a >= size_r - 1)
		return (0);
	for (k = i - 1, h = j - 1; l < a; l++, k--, h--)
	{
		if (k >= 0 && h < 0)
			v = (n1[k] - '0') + y;
		else if (h >= 0 && k < 0)
			v = (n2[h] - '0') + y;
		else
			v = (n1[k] - '0') + (n2[h] - '0') + y;
		y = v / 10;
		z = v % 10;
		r[l] = z + '0';
	}
	if (v / 10)
		r[l] = y + '0';
	else
		l--;
	for (k = 0, h = l; k <= (size_r - 1) / 2; k++, h--)
	{
		ab = r[k];
		r[k] = r[h];
		r[h] = ab;
	}
	r[a + 1] = '\0';
	return (r);
}
