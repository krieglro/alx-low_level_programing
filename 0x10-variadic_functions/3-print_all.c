#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - function prints a character
 * @arg: parameter of list of arguments pointing to
 * character printed
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - function prints an integer
 * @arg: parameter of list of arguments pointing to
 * integer to print
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - function that prints a float
 * @arg: parameter of a list of argument
 * to point to the float to print
 */

void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
 * print_string - function that prints a string
 * @arg: parameter of a list of arguments
 * pointing to string
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function prints something and a new line
 * @format: parameter of  string of characters representing
 * the type of argument
 * @...: number of arguments to be printed
 *
 * Description: any argument not of type char else nil
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0, b = 0;
	char *seprator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + a)))
	{
		b = 0;

		while (b < 4 && (*(format + a) != *(funcs[b].symbol)))
			b++;

		if (b < 4)
		{
			printf("%s", separator);
			funcs[b].print(args);
			separator = ", ";
		}

		a++;
	}

	printf("\n");

	va_end(args);
}
