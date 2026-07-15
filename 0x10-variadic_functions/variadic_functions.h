#ifndef _VARIADIC_FUNCTION_H
#define _VARIADIC_FUNCTION_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct get_types {
    char *types;
    void(*f)(va_list *);

}print_types;

void print_float(va_list *args);
void print_int(va_list *args);
void print_char(va_list *args);
void print_str(va_list *args);


#endif
