#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
<<<<<<< HEAD
 */
=======
*/
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7

int _strlen_recursion(char *s)
{
	if (*s == '\0')
<<<<<<< HEAD
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
=======
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7
}
