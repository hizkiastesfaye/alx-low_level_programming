#include "main.h"
/**
 * _strchr - function to check similarity
 * @s: param of pointer to pointed to c
 * @c: param of value
 * Return: passing pointer s
 */
char *_strchr(char *s,chr c)
{
	for(; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		else
			return (NULL);
	}
}
