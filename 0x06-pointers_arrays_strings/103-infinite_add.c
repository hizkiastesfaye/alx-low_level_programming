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

	int a, h, i, j, k, l = 0, t, u, v, y = 0, z;

	for (i = 0; *(n1 + i); i++)
		;
	for (j = 0; *(n2 + j); j++)
		;
	if (i >= j)
		a = i;
	else
		a = j;

	char s[size_r];

	k = i - 1;
	h = j - 1;
	for (; l < a; l++)
	{
		if (k >= 0 && h < 0)
		{
			u = n1[k] - '0';
			v = u + y;
			k--;
		}
		else if (h >= 0 && k < 0)
		{
			t = n2[h] - '0';
			v = t + y;
			h--;
		}
		else
		{
			u = n1[k] - '0';
			t = n2[h] - '0';
			v = u + t + y;
			h--;
			k--;
		}
		y = v / 10;
		z = v % 10;
		s[l] = z + '0';
	}
	if (v / 10)
		s[l] = y + '0';
	else
		l--;
	k = 0;
	h = l;
	for (; k < size_r; k++, h--)
		r[k] = s[h];
	if (l >= size_r - 1)
		return (0);
	return (r);
}
