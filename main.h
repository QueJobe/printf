#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

typedef struct specif{
	char *sym;
	int (*f)(va_list);
}cver_specif;

int _putchar(char c);
int _printf(const char *format, ...);
int funct_print(const char *format, cver_specif funct_list[], va_list args);
int p_char(va_list);
int p_string(va_list args);
int p_percent(va_list);
int print_number(va_list);
int p_integer(va_list);
void _vprintf(const char *format, va_list args);
#endif
