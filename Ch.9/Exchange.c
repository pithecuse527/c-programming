#include <stdio.h>

main()
{
  int a, b, tmp;
  int *p1, *p2;

  printf("Type the value of a : ");
  scanf("%d", &a);
  printf("Type the value of b : ");
  scanf("%d", &b);

  p1 = &a;
  p2 = &b;

  tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;

  printf("a : %d\nb : %d\n", a, b);

}
