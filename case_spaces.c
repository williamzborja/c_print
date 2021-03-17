#include "holberton.h"
/**
* case_spaces -  manage case with % and ' ' (spaces)
*
* @i: int
* @f: char*
* @tmp: int*
* @count: int*
* @lista: lista
* Return: va_list
*/
int case_spaces(int *i, const char *f, int *tmp, int *count, va_list lista)
{
	int num = 0, result = 0;

	while (f[*i + 1] == ' ') /* Logica espacios */ /* quita espacios */
		*i += 1;
	*tmp = format_is_correct_spaces(f[*i + 1]); /* is correc f*/

	if (*tmp == 1)
	{
		if (f[*i + 1] == 'd' || f[*i + 1] == 'i')
		{
			if (lista == NULL)
				return (-1);
			num = va_arg(lista, int);
			if (num >= 0)
			{
				*count += 1;
				_putchar(' ');
			}
			result = print_number(num);

			if (result == -1)
				return (-1);
			*count += result;
			*i += 1;
		}
	}

	return (0);
}
