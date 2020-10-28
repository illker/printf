# PrintF project 

TEAM F rules

## Task
- '0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life 
- '1. Education is when you read the fine print. Experience is what you get if you don't 
- '2. Just because it's in print doesn't mean it's the gospel

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


## David Alzate² [@illker](https://twitter.com/illker)
## Nicolas Herrara [@19Niick](https://twitter.com/19Niick)
