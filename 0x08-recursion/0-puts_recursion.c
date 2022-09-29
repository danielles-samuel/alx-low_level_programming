#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
<<<<<<< HEAD
 */
=======
*/
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
<<<<<<< HEAD
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
=======
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7
}
