#include "main.h"
/**
 * _memcpy - function to copy memory of one pointer to another
 * @dest: pointer param of destination
 * @src: pointer param of source
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i=0;i<n;i++){
		*(dest + i) = *(src +i);
	}
	return (dest);
}
