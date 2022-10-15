#include  <stdio.h>
#include <stdiolib.h>
#include <time.h>
/**
 * main - must always be an entry point
 *
 * Return: Not everytime 0
 */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	if (rem > 5)
		printf("%s %d is %d and is greater than 5\n", n, rem);
	else if (rem == 0)
		printf("%s %d is %d and is 0\n", n, rem);
	else if (rem < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", n, rem);
	return (0);
}
