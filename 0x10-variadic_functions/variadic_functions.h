#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 *Auth: Ayodele Abiola
 *Describe: An header file containing prototype of 
 *function for the header file use in the 0x010_variadic_function directory
 */
 #include <stdarg.h>
/**
i *struct printer: A new struct defining a printer
 *@symbol: A symbol representing a data type.
 *@print: A function pointer to a function that prints
 *	 a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
}print_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
