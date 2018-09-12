//
//  PrintDivided.c
//  Basic AND, OR practice.
//
//  Created by Ji Hong Guen on 9/12/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>
#define DIVISOR_1 3
#define DIVISOR_2 7
#define DIVIDED_AS_OR(i) (i % DIVISOR_1 == 0 || i % DIVISOR_2 == 0) ? 1 : 0
#define DIVIDED_AS_AND(i) (i % DIVISOR_1 == 0 && i % DIVISOR_2 == 0) ? 1 : 0

int main()
{
  int num;
  int index;

  printf("Type num : ");
  scanf("%d", &num);

  printf("\nDivided by 3 or 7...\n");
  for (index = 1; index <= num; index++)
    //if(i % 3 == 0 || i % 7 == 0)
    if(DIVIDED_AS_OR(index))
      printf("%d ", index);

  printf("\n\nDivided by 3 and 7...\n");
  for (index = 1; index <= num; index++)
    // if(i % 3 == 0 && i % 7 == 0)
    if(DIVIDED_AS_AND(index))
      printf("%d ", index);

  printf("\n\n");

  return 0;

}
