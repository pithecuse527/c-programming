#include <stdio.h>

main()
{
  char ch;
  char *p;
  char *q;

  ch = 'A';
  p = &ch;

  q = p;

  *q = 'Z';

  printf("Value of ch : ch ==> %c \n", ch);

}
