#include "main.h"

/**
 * print_alphabet_x10 - description
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	char ab;
	int i;

	for (i =0; i <= 9; i++)
	{
		for (ab = 'a'; ab <= 'z'; ab++)
		{
			_putchar(ab);
		}
		_putchar('\n');
	}
}
