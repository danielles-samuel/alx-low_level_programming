#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
<<<<<<< HEAD
 */
=======
*/
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
<<<<<<< HEAD
	_print_rev_recursion(s + 1);
	_putchar(*s);
=======
		_print_rev_recursion(s + 1);
		_putchar(*s);
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7
	}
}
