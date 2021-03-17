#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

/**
* struct lista - Short description
* @type_format: Format with conversion specifiers
* @f: Function pointer that return int and give va_list
*/
typedef struct lista
{
	char type_format;
	int (*f)(va_list);
} print_t;

int print_c(va_list);
int print_i(va_list);
int print_d(va_list);
int print_s(va_list);
int print_binary(va_list);
int rot13(va_list);
int rev_string(va_list);

int _putchar(char c);
int _printf(const char *format, ...);

int format_is_correct(const char format, char type);
int format_is_correct_spaces(char type);
int print_number(int n);

int get_function(char type, int *i, int *count, va_list lista);
int case_spaces(int *i, const char *f, int *tmp, int *count, va_list lista);

int _is_alpha(char c);

#endif
