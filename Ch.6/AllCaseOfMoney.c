#include <stdio.h>

int main()
{
  int amount, rest1, rest2, rest3;
  int count_of_50000, count_of_10000, count_of_5000, count_of_1000;
  int i = 0, j = 0, k = 0;

  printf("Type the amount : ");
  scanf("%d", &amount);

  for (i = 0; i <= (amount / 50000); i++)
  {
    count_of_50000 = i;
    rest1 = amount - (50000 * i);

    for (j = 0; j <= (rest1 / 10000); j++)
    {
      count_of_10000 = j;
      rest2 = rest1 - (10000 * j);

      for (k = 0; k <= (rest2 / 5000); k++)
      {
        count_of_5000 = k;
        rest3 = rest2 - (5000 * k);

        count_of_1000 = rest3 / 1000;

        printf("50000 WON : %d \n", count_of_50000);
        printf("10000 WON : %d \n", count_of_10000);
        printf("5000 WON : %d \n", count_of_5000);
        printf("1000 WON : %d \n", count_of_1000);
        printf("\n==========\n");

      }
    }

  }

  return 0;

}
