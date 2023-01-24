#include <stdlib.h>
/**
 * malloc_checked - to check malloc
 * @b: size of pointer
 * Return: return the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
