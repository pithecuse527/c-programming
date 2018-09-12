//
//  IsItPrime.c
//  Define it is prime number or not.
//
//  Created by Ji Hong Guen on 9/12/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

int main()
{
  int num, i;
  int divided = 0;

  while(1)
  {
    printf("Type num : ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
      if (num % i == 0) divided = 1;

    if (!divided) printf("%d is prime.\n", num);
    else printf("%d is not prime.\n", num);
  }

  return 0;


}
