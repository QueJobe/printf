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
		check /= 10;
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

	s = va_arg(args, const char *);
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

int p_integer(va_list args)
{
	int n;

	n = print_number(args);

	return (n);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @args: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}

/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsgined_number(unsigned int n)
{
	int check;
	int len;
	unsigned int num;

	check = 1;
	len = 0;

	num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return (len);
}
