#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base.
 * @y: exponent.
 * Return: value of the exponentiation.
<<<<<<< HEAD
 */
=======
*/
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7

int _pow_recursion(int x, int y)
{
	if (y < 0)
<<<<<<< HEAD
	return (-1);
	else if (y == 0)
	return (1);
	else
	return (x * _pow_recursion(x, y - 1));
=======
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7
}
