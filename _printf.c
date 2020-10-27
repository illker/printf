#include "holberton.h"
/**
 * _printf - print character to stdout
 * @format: number of args
 * Return: On success 1.
 */
int _printf(const char *format, ...)
{
	unsigned int counter1, counter2;
	va_list args;

	f_print ops[] = {
		{"c", p_character},
		{"s", p_string},
		{"i", p_int},
		{"d", p_int},
		{NULL, NULL}
	};
	va_start(args, format);
	if ((!format) || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	counter1 = 0;
	while (format && format[counter1])
	{
		if (format[counter1] == '%' || format[counter1] == 47)
		{
			if (format[counter1 + 1] == '%')
				_putchar(format[counter1 + 1]);
		}
		counter2 = 0;
		while (ops[counter2].letter != NULL)
		{
			if (*(ops[counter2].letter) == format[counter1])
			{
				ops[counter2].f(args);
				break;
			}
			counter2++;
		}
		counter1++;
	}
	va_end(args);
	return (counter2);
}
