//
//  AllCaseOfMoney.c
//  Print all case of money that user typed.
//
//  Created by Ji Hong Guen on 9/12/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

int main()
{
  // save amount & save rest of the money.
  int amount, rest1, rest2, rest3;

  // The number of each money unit.
  int count_of_50000, count_of_10000, count_of_5000, count_of_1000;

  // running indices.
  int i = 0, j = 0, k = 0;

  printf("Type the amount : ");
  scanf("%d", &amount);

  // First iteration that changes rest of money according to 50000 won.
  for (i = 0; i <= (amount / 50000); i++)
  {
    count_of_50000 = i;
    rest1 = amount - (50000 * i);

    // Second iteration that changes rest of money according to 10000 won.
    for (j = 0; j <= (rest1 / 10000); j++)
    {
      count_of_10000 = j;
      rest2 = rest1 - (10000 * j);

      // Third iteration that changes rest of money according to 5000 won.
      for (k = 0; k <= (rest2 / 5000); k++)
      {
        count_of_5000 = k;
        rest3 = rest2 - (5000 * k);

        // The number of 1000 won is definded from the last rest money.
        count_of_1000 = rest3 / 1000;

        // print the result.
        printf("50000 WON : %d \n", count_of_50000);
        printf("10000 WON : %d \n", count_of_10000);
        printf("5000 WON : %d \n", count_of_5000);
        printf("1000 WON : %d \n", count_of_1000);
        printf("\n====================\n");
      }
    }
  }

  return 0;

}
