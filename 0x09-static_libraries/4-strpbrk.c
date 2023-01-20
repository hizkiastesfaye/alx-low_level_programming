#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function to find first occurence of byte
 * @s: pointer of string
 * @accept: pointer of check byte
 * Return: which returns pointer s
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{

		int j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *s)
				return (s);
		else
			j++;
		}
	}
	return (NULL);
}
