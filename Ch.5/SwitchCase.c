//
//  SwitchCase.c
//  Basic Switch Case phrase practice.
//
//  Created by Ji Hong Guen on 9/10/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

int main()
{
  int num;
  printf("Choose from 1 ~ 4 : ");
  scanf("%d", &num);

  switch(num)
  {
    case 1 :
      printf("You picked 1.\n");
      //break;
    case 2 :
      printf("You picked 2.\n");
      break;
    case 3 :
      printf("You picked 3.\n");
      //break;
    case 4 :
      printf("You picked 4.\n");
      //break;
    default :
      printf("You picked the wrong number.\n");
  }

  return 0;

}
