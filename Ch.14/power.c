#include <stdio.h>
#define DEBUG

double power(int x, int y);

main()
{
  int a, b;
  printf("Type tow num : ");
  scanf("%d %d", &a, &b);

  power(a, b);

}

double power(int x, int y)
{
  double result = 1;
  int i;
  for (i = 0; i < y; i++) result *= x;
  #ifdef DEBUG
    printf("result=%f\n", result);
  #endif
  return result;
}
