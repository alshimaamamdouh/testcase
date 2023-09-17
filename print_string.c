#include "main.h"
/**
 *print_string - prints string and return length of string
 *
 *@str: pointer to char which needs to print
 *
 *Return: returns length of string
*/
int print_string(char *str)
{
int str_len;
char *s = "(null)";

if (str == NULL)
{
str_len = strlen(s);
write(1, s, str_len);
return (str_len);
}
str_len = strlen(str);
write(1, str, str_len);
return (str_len);
}
