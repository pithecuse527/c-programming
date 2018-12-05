#include <stdio.h>

extern int a;

void func()
{
  printf("extern int a ==> %d\n\n", a);
}
