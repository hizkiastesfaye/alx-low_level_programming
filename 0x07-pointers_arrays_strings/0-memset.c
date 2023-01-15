#include <stdio>
/**
 * _memset - a function that replaces values of string
 * @s: pointer to the param b
 * @b: variable of data to change
 * @n:size of the array
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
