#include "main.h"

/**
 * main - check the code
 *
 * Dsecription: Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		_putchar(ab);
	}
	_putchar('\n');
}
