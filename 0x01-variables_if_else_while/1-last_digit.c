#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - must always an entry point
 *
 * Return: value can be depend on condition
 */
int main(void)
{
	int n;
	int rem;
	char str[] = "last digit";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 2;
	if (n > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, rem);
	else if (n == 0)
		printf("%s %d is %d and is 0\n", str, n, rem);
	else if (rem < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, rem);
	return (0);
}
