#include <stdio.h>

int main()
{
  int num;
  int i, j;
  int divided = 0;

  printf("Type num : ");
  scanf("%d", &num);

  for (i = 2; i <= num; i++)
  {
    for (j = 2; j < i; j++)         // remembr the 2 will be shown since 2 < 2
      if (i % j == 0) divided = 1;
    if (!divided)
      printf("%d ", i);
    divided = 0;
  }

  return 0;

}
