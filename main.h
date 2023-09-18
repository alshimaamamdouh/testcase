
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int print_string(char * str);
int print_char(char ch);
char itoa_generic (char* u8ptrbuf, int u32int_value);
void putprin(char *t ,long double dig, char flag, char *ss);
#endif
