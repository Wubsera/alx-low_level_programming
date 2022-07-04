#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* This is my first code in c language.
*
* This program checks if the number is positive or negative
*/
int main(void)/*main function*/
{
	int n;/*declaratio*/

	srand(time(0));/*statment*/
	n = rand() - RAND_MAX / 2;
	/*function*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
