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
	int low;

	for (low = 0; low <= 9; low++)
	{
		putchar(low +'0');
		if (low < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
