#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function
 *
 * Description: this is my first c program in vi
 *
 * Return: return true or false
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
