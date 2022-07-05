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

	low = 'a';
	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
