# PrintF project 

```c
README.md 	
_printf.c 	
holberton.h		
man_3_printf	
p_func2	
```

## Return value
The _printf() function produces output according to a format which is described, returns, if the returns its successful returns the numbers of characters printed.

## Task
- '0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life 
- '1. Education is when you read the fine print. Experience is what you get if you don't 
- '2. Just because it's in print doesn't mean it's the gospel

## Examples
```c
_printf("Hello world.");
_printf("This is my age %d", "17");
_printf("")
```
## STRUCTS; AND PROTOTYPES FUNCTIONS
```c
typedef struct f_print
{
	char *letter;
	int (*f)(va_list);
} f_print;

int _printf(const char *format, ...);
int p_character(va_list f_print);
int p_string(va_list f_print);
int p_percent(__attribute__((unused))va_list f_print);
int p_int(va_list f_print);
int p_rot13(va_list);
int countnumber(unsigned int n);
int _putchar(char c);
```

TEAM F rules
## David Alzate² [@illker](https://twitter.com/illker)
## Nicolas Herrara [@19Niick](https://twitter.com/19Niick)
