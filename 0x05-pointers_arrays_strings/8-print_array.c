#include "main.h"
#include <stdio.h>
/**
 *print_array - A function that prints an elements of array
 *@a: Array
 *@n: input number of value to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
