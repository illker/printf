#include "holberton.h"
/**
 * _printf - print character to stdout
 * @format: number of args
 * Return: On success 1.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0, i, j;
	int (*teamf)(va_list) = NULL;

	f_print ops[] = {
		{"c", p_character}, {"s", p_string}, {"%", p_percent},
		{"i", p_int}, {"d", p_int}, {NULL, NULL}
	};
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		for (; format[i] != '%' && format[i] != '\0'; counter++, i++)
			_putchar(format[i]);
		if (format[i] == '\0')
			return (counter);
		i++;
			
		for (j = 0; j < 5; j++)
		{
			if (format[i] == *(ops[j]).letter)
			{
				teamf = ops[j].f;
				break;
			}
		}
		if (teamf != NULL)
			counter += teamf(args);
		else
		{
			_putchar(37);
			_putchar(format[i]);
		}
	}
	va_end(args);
	return (counter);
}
