#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct f_print - struct.
* @format: Number of arguments.
* @f: Pointer pointing to a function.
*/
typedef struct f_print
{
	char *format;
	int (*f)(va_list);
} f_print;

int p_character(va_list f_print);
int p_string(va_list f_print);
int p_int(va_list f_print);
int countnumber(unsigned int n);
int _putchar(char c);

#endif /* HOLBERTON_H */
