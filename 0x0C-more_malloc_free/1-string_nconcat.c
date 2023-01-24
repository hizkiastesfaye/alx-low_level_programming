#include <stdlib.h>
/**
 * string_nconcat - to concanate two string
 * @s1: pointer string
 * @s2: pointer string 2
 * @n: size
 * Return: return the concatnated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *normal;
	unsigned int n1, n2, i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; *(s1 + n1); n1++)
		;
	for (n2 = 0; *(s2 + n2); n2++)
		;
	k = n1 + n2;
	normal = malloc(sizeof(char) * (k + 1));
	if (normal == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		if (*(s1 + i) == '\0')
		{
			unsigned int j, m;

			for (j = i, m = 0; m < n; j++, m++)
				*(normal + j) = *(s2 + m);
			break;
		}
		else
			*(normal + i) = *(s1 + i);
	}
	return (normal);
}
