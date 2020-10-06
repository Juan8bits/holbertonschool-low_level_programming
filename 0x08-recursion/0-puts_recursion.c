#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line
 * @s: String.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
