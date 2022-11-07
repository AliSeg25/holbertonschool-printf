#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"

typedef struct app_func
{
	char *type;/* int, char, string */
	int (*f)();
} type;

int print_pourcentage(va_list arg);
int my_write(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);

#endif
