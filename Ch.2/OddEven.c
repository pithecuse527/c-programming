//
//  OddEven.c
//  Distinguish whether it is odd or even.
//
//  Created by Ji Hong Guen on 9/5/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

int main()
{
  // number variable for distinguish.
  int num;

  // default is odd.
  char *st = "odd";

  // taking value from user.
  printf("Type the number : ");
  scanf("%d", &num);

  // tell user whether it is odd or even.
  if (!(num % 2)) st = "even";
  printf("It is %s number.\n\n", st);

  return 0;

}
