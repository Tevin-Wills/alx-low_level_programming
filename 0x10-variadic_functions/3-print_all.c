#include "variadic_functions.h"

/**
 * print_all - prints anything to the screen
 * @format: list of types of arguments passed to a function
 */
void print_all(const char * const format, ...)
{
	int i, check; /*declare variables and va_arg datatype */

	char *str;
	va_list spec;

	va_start(spec, format); /* initialize var arguments */
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spec, int));
				check = 0; /*check if condition has been met */
				break;
			case 'f':
				printf("%f", va_arg(spec, double));
				check = 0;
				break;
			case 'c':
				printf("%c", va_arg(spec, int));
				check = 0;
				break;
			case 's':
				str = va_arg(spec, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check = 0;
				break;
			default:
				check = 1;
				break;
		}
		if (format[i + 1] != '\0' && check == 0) /* if NOT NULL */
			printf(", ");
		i++; /* update step of iter var */
	}
	printf("\n");
	va_end(spec); /*end transversal */
}
