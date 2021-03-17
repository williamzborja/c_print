#include "holberton.h"
/**
* _printf - printf functions :)
* @format: format with  %d  %i  %c %s
* Return: length for format with expansion  of specifiers of format
*/
int _printf(const char *format, ...)
{
    va_list lista;
    int i = 0, j = 0, count = 0, result = 0;
    print_t print_type[] = {{'c', print_c}, {'s', print_s}, {'i', print_i}, {'d', print_d}, {'\0', NULL}};
    va_start(lista, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {

        if (format[i] == '%')
        {

            if (format[i + 1] != '%')
            {

                if (format_is_correct(format[i], format[i + 1]))
                { /* %d  %i  %c || %s == True */
                    for (j = 0; print_type[j].type_format != '\0'; j++)
                    {
                        if (format[i + 1] == print_type[j].type_format)
                        {
                            result = print_type[j].f(lista);
                            if (result == -1)
                                return (-1);
                            count += result;
                            i++;
                            break;
                        }
                    }
                }

                 /* [flag][min width][precision][length modifier] */

                j = i;
                while (format[j + 1] == ' ')
                {
                    /* si el num es positivo */
                    j++;
                }

                if (format[j] == 'd' || format[j] == 'c' || format[j] == 'i' || format[j] == 's')
                {
                    for (j = 0; print_type[j].type_format != '\0'; j++)
                    {
                        if (format[i + 1] == print_type[j].type_format)
                        {
                            result = print_type[j].f(lista);
                            if (result == -1)
                                return (-1);
                            count += result;
                            i++;
                            break;
                        }
                    }
                }

                // [conversion specifier]
                j = i;

                while ((format[j] != 'd' || format[j] != 'c' || format[j] != 'i' || format[j] != 's') || format[j] != '\0')
                {
                    j++;
                }

                while (format[i] != '\0')
                {
                    _putchar(format[i]);
                    count++;
                    i++;
                }
            }
            else // %%
            {
                _putchar(format[i]);
                count++;
                i++;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }

    return (count); /* longitud */
}

// is_state_space = 0;
// %

// %   ' '
//    is_state_space = 1;

//  entraria a tomar como valido  %d   ' 'd