#include "main.h"
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
int n, num_of_ch;
char *s;
char ch;
va_list args;

va_start(args, format);
num_of_ch = 0;
n = 0;
while (format && format[n])
{
if (format[n] != '%')
{
write(1, &format[n], 1);
num_of_ch++;
}
else if (format[n + 1])
{
n = n + 1;
if (format[n] == '%')
{
write(1, &format[n], 1);
num_of_ch++;
}
else if (format[n] == 'c')
{
ch = va_arg(args, int);
num_of_ch = num_of_ch + print_char(ch);
}
else if (format[n] == 's')
{
s = va_arg(args, char *);
num_of_ch = num_of_ch + print_string(s);
}
else if (format[n] == 'i' || format[n] == 'd')
{
}
else
{
write(1, &format[n - 1], 1);
write(1, &format[n], 1);
num_of_ch++;
}
}
n++;
}
va_end(args);
return (num_of_ch);
}
