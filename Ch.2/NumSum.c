//
//  NumSum.c
//  adding multiple variables.
//
//  Created by Ji Hong Guen on 9/5/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int usingVar(void);
int usingArr(void);

int main()
{

  int result = usingArr();
  printf("The result(usingArr func) : %d\n\n", result);

  int _result = usingVar();
  printf("The result(usingVar func) : %d\n\n", _result);

  return 0;

}

int usingVar(void)
{
  // number variables for sum.
  int num1, num2, num3, num4;

  // result variable.
  int result = 0;

  // taking values from user.
  printf("1 : ");
  scanf("%d", &num1);
  printf("2 : ");
  scanf("%d", &num2);
  printf("3 : ");
  scanf("%d", &num3);
  printf("4 : ");
  scanf("%d", &num4);

  // then add to result.
  result = num1 + num2 + num3 + num4;

  return result;

}

int usingArr(void)
{
  // the number of variables.
  int n;

  // Operands.
  int *numbers;

  // result variable.
  int result;

  // index variable.
  int i;

  // taking value of num.
  printf("Type the number of variables : ");
  scanf("%d", &n);

  // allocate memeory for numbers array.
  numbers = (int*)malloc(sizeof(int) * n);

  // taking the values for numbers and add to result.
  for (i = 0; i < n; i++)
  {
    printf("Type value of numbers %d : ", i+1);
    scanf("%d", numbers + i);
    result += *(numbers + i);
  }

  // print the numbers.
  printf("\nThese are the values that you typed.\n");
  for (i = 0; i < n; i++) printf("%d ", *(numbers + i));
  printf("\n");

  return result;

}
