#include <stdlib.h>
/**
 * array_range - printf array
 * @min: min param
 * @max: max param
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j, m;

	if (min > max)
		return (NULL);
	m = (max - min) +1;
	p = malloc(sizeof(int) * m);

	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
