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

char* _itoa(int num, char* str, int base);
void _printc(va_list ptr);
void _printpourcent(va_list ptr);
void _printint(va_list ptr);
void _prints(va_list ptr);
int _printf(const char *format, ...);

#endif
