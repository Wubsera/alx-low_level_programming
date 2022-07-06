#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Check main
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number n
 */

int print_last_digit(int n)
{
	int lastd;

	if (n > 0)
	{
		lastd = n % 10;
		_putchar(lastd + '0');
	}
	else
	{
		lastd = -1 * n % 10;
		_putchar(lastd + '0');
	}
	return (lastd % 9);
}
