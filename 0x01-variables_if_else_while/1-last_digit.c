#include <stdlib.h>
#include <time.h>
/**
 * main - the main function
 *
 * Description: this is my second c program in vi
 *
 * Return: return true or false
 */
int main(void)
{
	 int n;

	 srand(time(0));
	 n = rand() - RAND_MAX / 2;
	 if ((n % 10) > 5)
	 {
		 printf("the last digit of %d is %d and it's greater than 5\n", n, n % 10);
	 }
	 else if ((n % 10) == 0)
	 {
		 printf("the last digit of %d is %d and it's 0\n", n, n % 10);
	 }
	 else if ((n % 10) < 6 && (n % 10) != 0)
	 {
		 printf("the last digit of %d is %d and it's less than 6 and not 0\n", n, n % 10);
	 }
	 return (0);
}
