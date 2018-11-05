#include <stdio.h>

void reciprocal1(void);
void reciprocal2(void);

int main()
{
  reciprocal2();
  return 0;

}

void reciprocal1()
{
  int n = 1;

  while(1)
  {

    if (!n) break;

    printf("Type n : ");
    scanf("%d", &n);

    printf("The result : %f\n\n", 1. / n);

  }

}

void reciprocal2(void)
{
  int n = 1;

  while(1)
  {
    printf("Type n : ");
    scanf("%d", &n);

    if (!n) continue;

    printf("The result : %f\n\n", 1/(float)n);

  }

}
