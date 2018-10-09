#include <stdio.h>

int main()
{

  int sum = 0;
  int i;

  for(i = 1; i <= 100; i++)
  {
    if (i % 3 == 0) break;

    sum += i;
  }

  printf("The sum of 1 ~ 100 (Except multiple of 3) : %d\n\n", sum);

}
