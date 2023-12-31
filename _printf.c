#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 *_printf - produces output according to a format.
 *
 *@format: string
 *
 *Return: the number of characters printed
 *excluding the null byte used to end output to strings
*/
int _printf(const char *format, ...)
{
char token[1000];
int strl = 0, k = 0, i;
va_list ptr;
va_start(ptr, format);
for (i = 0; format[i] != '\0'; i++)
{
token[k++] = format[i];
if (format[i + 1] == '%' || format[i + 1] == '\0') 
{
token[k] = '\0';
k = 0;
if (token[0] != '%') 
{
write(1, token, strl + 1);
}
else 
{
int j = 1;
char ch1 = 0;
while ((ch1 = token[j++]) < 58) 
{
}
if (ch1 == 'i' || ch1 == 'd' || ch1 == 'u' || ch1 == 'h') 
{
putprin(token, va_arg(ptr, int), 'i', NULL);
}
else if (ch1 == 'c') 
{
putprin(token, va_arg(ptr, int), 'c', NULL);
}
else if (ch1 == 's') 
{
putprin(token, 0, 's', va_arg(ptr, char*));
}
else if (ch1 == '%')
{
putprin(token, va_arg(ptr, int), 'c', NULL);
}
else 
{
putprin('\0', 0, 's', token);
}
}
}
strl = i + 1;
}
va_end(ptr);
return (strl);
}
