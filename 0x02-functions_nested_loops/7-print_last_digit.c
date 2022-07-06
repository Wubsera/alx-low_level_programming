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
	int ld;

	if (n > 0)
	{
		ld = n % 10;
		_putchar(ld + '0');
	}
	else
	{
		ld = -1 * n % 10;
		_putchar(ld + '0');
	}
	return (ld % 10);
}

