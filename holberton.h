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
	int (*f)(valist);
} f_print;

void p_character(valist f_print);
void p_string(valist f_print);
void p_int(valist f_print);
void countnumber(unsigned int n);
int _putchar(char c);

#endif /* HOLBERTON_H */
