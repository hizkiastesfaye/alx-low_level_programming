#include <stdlib.h>
/**
 * _calloc - function calloc
 * @nmemb: number of byte
 * @size: size of byte
 * return: return value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char **pp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pp = malloc(size * nmemb);
	if (pp == NULL)
		return (NULL);
	return (pp);
}
