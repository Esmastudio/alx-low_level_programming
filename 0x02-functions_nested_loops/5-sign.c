#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n:  variable used to input the test number
 * Return: 1 if positive and 0 if 0 and then -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

