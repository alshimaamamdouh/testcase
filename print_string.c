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
int str_len = 0;
char *s = "(null)";

if (str == NULL)
{
while (*(s + str_len) != '\0')
str_len++;
write(1, s, str_len);
return (str_len);
}
while (*(str + str_len) != '\0')
str_len++;
str_len = strlen(str);
write(1, str, str_len);
return (str_len);
}
