#include "main.h"

/**
<<<<<<< HEAD
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
=======
 * factorial - gives the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
>>>>>>> 6d5e70a86092998f72475ee41e866c8ce11b07c7
}
