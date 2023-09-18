#include "main.h"

/**
 *putprin - write function
 *@t: input one
 *@dig: input two
 *@fla:g: input three
 *@ss: input four
 *
 */

void putprin(char *t ,   long double dig , char flag , char *ss )
{
   char num,s[10];
   int x = (int) dig;
    switch(flag)
    {
   case 'i':
   num=itoa_generic(s,dig);

    write(1, s, num);

                     break;
    case 'c':
            write(1,&x, 1);
            break;

    case 's':
                     for(int ii = 0 ; ss[ii] != '\0'; ii++)
                     {
                             write(1, &ss[ii], 1);
                     }


            break;

}
                     for(int ii = 2 ; t[ii] != '\0'; ii++)
                     {
                             write(1, &t[ii], 1);
                     }
}
