#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * p_character - Function that prints a character to standard output
 * @args: Variadic list of arguments
 * Return: The number of characters printed
 */

int p_character(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * p_string - Function to print a string to standard output
 * @args: Variadic list of arguments
 * Return: The number of characters printed
 */

int p_string(va_list args)
{
	int a;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a] != '\0'; a++)
		_putchar(s[a]);
	return (a);
}

/**
 * p_int - Function to print a string to standard output
 * @args: Variadic list of arguments
 * Return: The number of characters printed
 */

int p_int(va_list args)
{
	int value, x = 0; /* variable takes value of arguments */
	unsigned int i; /* Var almacena el numero a imprimir temp en positivo*/

	value = va_arg(args, int);

	if (value < 0)
	{
		_putchar(45);
		x = 1;
		i = value * (-1);
	}
	else
	{
		i = value;
	}

	if (i > 9)
	{
		return (x + countnumber(value));
	}
	_putchar(i + '0');
	return (1 + x);
}

/**
 * countnumber - check and print the digit mayor to 9
 * @n: Value to count
 * Return: The number of characters printed
 */

int countnumber(unsigned int n)
{
	int count = 0;
	unsigned int a, b;

	if (n != 0)
	{
		b = (n / 10);
		a = (n % 10);
		count += countnumber(b);
		count++;
		_putchar(a + '0');
		return (count);
	}
	return (0);
}
