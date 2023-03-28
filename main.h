#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>

int _printf(const char *format, ...);

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);


#endif /* MAIN_H */
