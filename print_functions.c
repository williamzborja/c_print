#include "holberton.h"
#include "limits.h"

/**
* print_c - Print a character
* @a: arguments
* Return: lengh of expansion
*/
int print_c(va_list a)
{
	if (a == NULL)
		return (-1);

	_putchar(va_arg(a, int));
	return (1);
}
/**
* print_i - Print a integer
* @a: arguments
* Return: lengh of expansion
*/
int print_i(va_list a)
{
	unsigned int num;

	if (a == NULL)
		return (-1);

	num = va_arg(a, int);
	return (print_number(num));
}
/**
* print_d - Print a integer
* @a: arguments
* Return: lengh of expansion
*/
int print_d(va_list a)
{
	unsigned int num;

	if (a == NULL)
		return (-1);

	num = va_arg(a, int);
	return (print_number(num));
}
/**
* print_s - Print a char*
* @a: variadic argumants
* Return: lengh of expansion
*/
int print_s(va_list a)
{
	int i;
	char *string;

	if (a == NULL)
		return (-1);

	string = va_arg(a, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}

/**
* print_number - Print a Integer *
* @n: number to print
* Return: length
*/
int print_number(int n)
{
	unsigned int tmp, tens = 1, length = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
		length++;
	}
	tmp = n;
	if (n == INT_MIN)
		tmp++;

	while (tmp > 9)
	{
		tmp /= 10;
		tens *= 10;
		length++;
	}
	tmp = n;
	while (tens > 0)
	{
		_putchar('0' + tmp / tens);
		tmp %= tens;
		tens /= 10;
	}
	return (length + 1);
}
