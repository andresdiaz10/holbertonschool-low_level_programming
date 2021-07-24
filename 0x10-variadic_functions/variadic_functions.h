#ifndef VARADIC_FUNCTIONS_H_
#define VARADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARADIC_FUNCTIONS_H_ */
