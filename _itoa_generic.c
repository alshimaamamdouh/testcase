#include "main.h"

/**
 *itoa_generic - converter
 *@u8ptrbuf: input char
 *@u32int_value: input int
 *
 * Return: character inverted
 */

char itoa_generic (char* u8ptrbuf, int u32int_value)
{
  char index = 0,num_digits=0;
  int tempVariable = u32int_value;
  if (u32int_value == 0)
  {
    num_digits = 1;
  }
  else
  {
    for(num_digits = 0; tempVariable > 0; num_digits++)
    {
      tempVariable /= 10;
    }
  }
  for(index = 1; index <= num_digits; index++)
  {
    u8ptrbuf[num_digits - index] = (u32int_value % 10) + 0x30;
    u32int_value /= 10;
  }
  return num_digits;
}
