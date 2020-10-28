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

/**
* p_rot13 -  encodes a string using.
* @args: Variadic list of arguments
* Return: count.
*/
int p_rot13(va_list args)
{
	int c, i, count = 0;
	char *s;
	char l[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);

	for (c = 0; s[c] != '\0'; c++)
	{
		for (i = 0; l[i] != '\0'; i++)
		{
			if (s[c] == l[i])
			{
				_putchar(n[i]);
				count++;
				break;
			}
		}
		if (i > 51)
		{
			_putchar(s[c]);
			count++;
		}
	}
	return (count);
}
