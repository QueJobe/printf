#include "main.h"
#include <stdint.h>

/**
 * _printf - function to check number of
 *           characters printed
 * @format: character string
 * Return:the number characters printed
 */

int _printf(const char *format, ...)
{
	int chars_printed = 0;

	cver_specif funct_list[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"d", p_integer},
		{"i", p_integer},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	chars_printed = funct_print(format, funct_list, args);

	va_end(args);

	return (chars_printed);
}
