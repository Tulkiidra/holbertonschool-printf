#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
typedef struct type {
  char *type;
  void (*f)(va_list ptr);
} type_t;

char *decimal_to_char(int num, char* str);
void _printc(va_list ptr);
void _printpourcent(va_list ptr);
void _printint(va_list ptr);
void _prints(va_list ptr);
int _printf(const char *format, ...);

#endif
