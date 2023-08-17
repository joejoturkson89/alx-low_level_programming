#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: parameter
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int e = 0, f, g = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[e])
	{
		f = 0;
		while (t_arg[f])
		{
			if (format[e] == t_arg[f] && g)
			{
				printf(", ");
				break;
			} f++;
		}
		switch (format[e])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), g = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), g = 1;
				break;
			case 'f':
				printf("%d", va_arg(valist, int)), g = 1;
				break;
			case 's':
				str = va_arg(valist, char *), g = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} e++;
	}
	printf("\n"), va_end(valist);
}
