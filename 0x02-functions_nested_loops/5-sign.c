#include"main.h"

/**
 * print_sign - Print + if n is greater than zero.
 *		0 if n is zero and - if n is less
 *		than zero
 *
 * @n:takes integer type input for function.
 *
 * Return : 1 if +, 0 if 0, -1 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (+1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
