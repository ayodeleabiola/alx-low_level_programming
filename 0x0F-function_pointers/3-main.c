#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - Prints the result of simple operations.
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments.
 *
 *Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv)
{
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(get_op);
	ans = res(one, two);
	printf("%d\n", ans);
	return (0);
}
