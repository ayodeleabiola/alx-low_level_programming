#include "main.h"
#include <stdui.h>
/**
 *print_array - check code for Alx students
 *@a: an array of integers
 *@n: the number of elements to swap
 *Return: Nothing
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
/**
 *main - check code fro Alx student
 *
 *Return: Always 0
 */
int main(void)
{
	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
