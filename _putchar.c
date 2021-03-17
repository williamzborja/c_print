#include <unistd.h>
/**
* _putchar - print to std with buffer 2048
* @c: character to send to stdout
* Return: integer number
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
