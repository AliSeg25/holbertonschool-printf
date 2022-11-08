#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

typedef struct app_func
{
	char *type;/* int, char, string */
	int  (*f)(va_list arg);
} type;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int _strlen(char *s);

#endif
