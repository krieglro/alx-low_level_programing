#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function prints stirngs and a new line
 * @separator: string to be separated
 * @n: number of strings passed to the function
 * @...: number of strings to be printed
 *
 * Description: nil if a string is null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
