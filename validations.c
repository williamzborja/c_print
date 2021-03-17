#include "holberton.h"

/**
* format_is_correct  - this function validate if format is correct
* @format: char %
* @type: format specifier
* Return: 0 or
*/
int format_is_correct(char format, char type)
{
	if (format != '%')
		return (0);

	if (type == 'd' || type == 'c' || type == 'i' || type == 's' ||
	type == 'b' || type == 'R' || type == 'r')
		return (1);
	return (0);
}

/**
* format_is_correct_spaces - validate formate in space case
* @type: char
* Return: int
*/
int format_is_correct_spaces(char type)
{
	if (type == 'd' || type == 'c' || type == 'i' || type == 's' ||
	type == 'b' || type == 'R' || type == 'r')
		return (1);
	return (0);
}


