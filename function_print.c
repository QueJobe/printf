#include "main.h"

/**
 * funct_print - function to print characters and
 *              determine how many charecters where printed
 * @format: constant character string
 * @funct_list: converstion specifiers array
 * @args: arguments from the input string
 * Return: number of characters printed
 */

int funct_print(const char *format, cver_specif funct_list[], va_list args)
{
	int i, j, n;
	int printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; funct_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == funct_list[j].sym[0])
				{
					n = funct_list[j].f(args);
					if (n == -1)
						return (-1);
					printed_chars += n;
					break;
				}
			}
			if (funct_list[j].sym == NULL && format[i + 1] !=' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[j]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
