#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__

#define null (void *)0
#define TRUE 1
#define FALSE 0
#define is ==

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* __VARIADIC_FUNCTIONS_H__ */
