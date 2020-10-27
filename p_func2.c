#include "holberton.h"

/**
 * p_percent - Function that prints a character to standard output
 * @args: Variadic list of arguments
 * Return: The number of characters printed
 */

int p_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
