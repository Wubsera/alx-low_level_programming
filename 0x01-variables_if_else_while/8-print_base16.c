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
	char low;
	char row;

	row = 'a';
	for (low = 0; low < 10; low++)
	{
		putchar(low + '0');
	}
	for (low = 10; low <= 15; low++)
	{
		putchar(row);
		row++;
	}
	putchar('\n');

	return (0);
}
