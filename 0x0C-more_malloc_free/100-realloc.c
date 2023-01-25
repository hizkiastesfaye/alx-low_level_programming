#include <stdlib.h>
/**
 * _realloc - function of contiguous allocatiiion
 * @ptr: pointer param
 * @old_size: previous ptr size
 * @new_size: new string size
 * Return: return the pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == 0 || new_size == 0)
		return (NULL);
	if (old_size == new_size)
		return (ptr);
	ptr = realloc(ptr, new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
