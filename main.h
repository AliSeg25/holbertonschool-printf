#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

typedef struct app_func
{
	char *type;/* int, char, string */
<<<<<<< HEAD
	int  (*f)(va_list arg);
=======
	int (*f)();
>>>>>>> df74f57d3655f29a13e8c24b9b0d19375a4b8d8e
} type;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int _strlen(char *s);

#endif
