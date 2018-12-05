#include <stdio.h>
#include "exchange.c"

void exchange();

int a, b;

main()
{
  printf("a : ");
  scanf("%d", &a);
  printf("b : ");
  scanf("%d", &b);

  exchange();

  printf("exchanged a & b : %d %d\n\n", a, b);
}
