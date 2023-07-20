#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * prints_strings - prints strings, followed by a new line
 * @separate: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 *
 * description: if separator is NULL, it is not printed
 * 		if one of the strings if NULL, (nil) is printed instead
 */
void print_all(const char * const format, ...)
