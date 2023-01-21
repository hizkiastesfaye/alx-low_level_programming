#include <stdlib.h>
/**
 * _strdup - function to duplicate
 * @str: pointer of string
 * Return: return string
 */
char *_strdup(char *str)
{
	int j,i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (j = 0; *(str + j) !='\0';j++)
	dup = malloc((1 + j) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		*(dup + i) = *(str + i);
	return (dup);
}
