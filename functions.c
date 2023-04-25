#include "main.h"

/**
 * print_number - function to print numbers
 * @args: arguments passed to the function
 * Return: number for printed integers
 */

int print_number(va_list args)
{
	int n;
	int len = 0;
	int check = 1;
	unsigned int num;

	n = va_arg(args, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	for (; num / check > 9; )
		check *= 10;
	for (; check != 0;)
	{
		len += _putchar('0' + num / check);
		num %= check;
		check / 10;
	}
	return (len);
}

/**
 * p_char - function to print characters
 * @args: arguments from printf function
 * Return: 1 for success
 */

int p_char(va_list args)
{
	char n;

	n = va_arg(args, int);
	_putchar(n);
	return (1);
}

/**
 * p_string - function to print string
 * @args: passes string arguments
 * Return: lenght of string
 */

int p_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(arg, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * p_percent - function to print % character
 * @args: passes character arguments
 * Return: 1 if successful
 */

int p_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * p_integer - function to print integer
 * @args: arguments passed to the function
 * Return: number of integers printed
 */

int p_integer(args)
{
	int n;

	n = print_number(args);

	return (n);
}
