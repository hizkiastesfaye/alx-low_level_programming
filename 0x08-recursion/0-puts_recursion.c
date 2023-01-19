#include "main.h"
/**
 * _puts_recursion - function to print string
 * @s: pointer of string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
}
