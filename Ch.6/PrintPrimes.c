//
//  PrintPrimes.c
//  Print all prime number.
//
//  Created by Ji Hong Guen on 9/12/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

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
    for (j = 2; j < i; j++)         // the 2 will be shown since 2 < 2
      if (i % j == 0)
      {
        divided = 1;
        break;
      }
    if (!divided)
      printf("%d ", i);
    divided = 0;
  }

  printf("\n\n");

  return 0;

}
