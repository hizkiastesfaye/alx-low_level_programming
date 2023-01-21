#include <stdlib.h>
/**
 * _strdup - function to duplicate
 * @str: pointer of string
 * Return: return string
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(*(str)));
	if (dup == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		*(dup + i) = *(str + i);
	return (dup);
}
