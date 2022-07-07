#include <stdio.h>
#include "main.h"

/**
 * _isupper - check main
 *
 * @c: an integer input n
 *
 * Description: Write a function that checks for uppercase character.
 *
 * Return: return 1 if c is uppercase otherwise return 0..
 */

int _isupper(int c)
{
	char ch;
	int n = 0;

	for (char = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
