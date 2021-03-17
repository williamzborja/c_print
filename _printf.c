#include "holberton.h"
/**
* _printf - printf functions :)
* @format: format with  %d  %i  %c %s
* Return: length for format with expansion  of specifiers of format
*/
int _printf(const char *format, ...)
{
	va_list lista;
	int i = 0, count = 0, tmp = 0;

	va_start(lista, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		tmp = 0;
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(format[i]);
			i += 2;
			count++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] == ' ') /*caso spacios*/
		{
			case_spaces(&i, format, &tmp, &count, lista);
		}
		else if (format_is_correct(format[i], format[i + 1]) || tmp == 1)
			get_function(format[i + 1], &i, &count, lista);
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	return (count); /* longitud */
}
