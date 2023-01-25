#include <stdlib.h>
/**
 * _calloc - function calloc
 * @nmemb: number of byte
 * @size: size of byte
 * Return: return value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pp = malloc(size * nmemb);
	if (pp == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pp[i] = 0;
	return (pp);
}
