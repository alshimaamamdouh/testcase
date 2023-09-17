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
int n, j, num_of_ch;
char *s;
char ch;
va_list args;// Create a va_list to hold the variable arguments

va_start(args, format); // Initialize the va_list
num_of_ch = 0;
n = 0;
//Iterate through the format string character by character:
while (format && format[n])
{
//If the current character is not '%', print it directly to the output.
if (format[n] != '%')
{
write(1, &format[n], 1);
num_of_ch++;
}
else
{
//Move the pointer to the next character.
n = n + 1;
//ask if the next ch is = %,so it will print it
if (format[n] == '%')
{
write(1, &format[n], 1);
num_of_ch++;
}
//ask for format specifier
else if (format[n] == 'c')
{
ch = va_arg(args, int);
write(1, &ch, 1);
num_of_ch++;
}
else if (format[n] == 's')
{
s = va_arg(args, char *);
num_of_ch = num_of_ch + print_string(s);
}
else if (format[n] == 'i' || format[n] == 'd')
{
  //integer format
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
