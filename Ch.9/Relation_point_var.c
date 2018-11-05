#include <stdio.h>

main()
{
  char ch;
  char *p;

  ch = 'A';
  p = &ch;

  printf("Value of ch : ch ==> %c\n", ch);
  printf("Adress of ch : &ch ==> %d\n", &ch);
  printf("Value of p : p ==> %d\n", p);
  printf("Value of p points : *p ==> %c\n", *p);
  printf("The size of p : %d\nThe size of *p :%d\n", sizeof(p), sizeof(*p));

  int *a;
  printf("!%d!\n", sizeof(a));


}
