#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <limits.h>
#include <stdio.h>
#include "main.h"

typedef struct app_func
{
	char *type;/* int, char, string */
	void (*f)(va_list);
} type;


int _printf(const char *format, ...);



#endif
