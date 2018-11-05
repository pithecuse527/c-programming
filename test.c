#include <stdio.h>

void ft(int *a);

main()
{
  int a = 11a;

  printf("Start!\n");
  ft(&a);
  printf("%d\n End!\n", a);

}

void ft(int *a)
{
  printf("Called...\n");
  //*a = *a + 1;
  *a += 1;

}
