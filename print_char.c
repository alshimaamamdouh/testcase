#include "main.h"
/**
 *print_char - prints char
 *
 *@ch: char which needs to print
 *
 *Return: 1
*/
int print_char(char ch)
{
write(1, &ch, 1);
return (1);
}
