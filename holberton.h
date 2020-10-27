#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct f_print - struct.
* @letter: Number of arguments.
* @f: Pointer pointing to a function.
*/
typedef struct f_print
{
	char *letter;
	int (*f)(va_list);
} f_print;

int _printf(const char *format, ...);
int p_character(va_list);
int p_string(va_list);
int p_percent(__attribute__((unused))va_list);
int p_int(va_list);
int countnumber(unsigned int n);
int _putchar(char c);

#endif /* HOLBERTON_H */
