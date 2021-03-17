#include "holberton.h"

/**
* rot13 - print binary
*
* @lista: va_list
* Return: length
*/
int rot13(va_list lista)
{
	int i;
	int j;
	char let[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;

	i = 0;
	j = 0;

	if (!lista)
		return (0);

	s = va_arg(lista, char *);
	while (s[i] != '\0')
	{
		if (!_is_alpha(s[i]))
		{
			_putchar(s[i]);
			i++;
			continue;
		}
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				_putchar(cod[j]);
				break;
			}
		}
		i++;
	}
	return (i);
}

/**
* rev_string - print binary
*
* @lista: va_list
* Return: length
*/
int rev_string(va_list lista)
{
	int i, len;
	char *s;

	i = 0;
	len = 0;

	if (!lista)
		return (0);
	s = va_arg(lista, char *);

	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}

/**
* print_binary - print binary
*
* @b: algo
* Return: int
*/
int print_binary(va_list b)
{
	unsigned int decimal, size, i, j, residuo, cociente, num[1024];

	decimal = va_arg(b, unsigned int);

	for (i = 0; i <= decimal || i != 0; i++)
	{
		cociente = decimal / 2;
		residuo = decimal % 2;
		decimal = cociente;
		num[i] = residuo;
		if (decimal == 0)
		{
			size = i;

			for (j = 0; j <= size; j++)
			{
				_putchar(num[size - j] + 48);
			}
			break;
		}
	}
	return (j);
}
