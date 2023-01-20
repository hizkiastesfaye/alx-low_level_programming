#include "main.h"

/**
 *_isalpha - prints all alphabets
 * @c: parameter
 * Description: to print alphabets
 * Return: alphabets
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
