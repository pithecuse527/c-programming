//
//  Lec_Test.c
//  Just practice.
//
//  Created by Ji Hong Guen on 9/5/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

void calc1(void);
void calc2(void);

int main()
{
  calc2();
}

void calc1()
{
  int num1, num2;
  int result;

  printf("Type the value of num1 : ");
  scanf("%d", &num1);
  printf("Type the value of num2 : ");
  scanf("%d", &num2);


  result = num1 + num2;
  printf("%d + %d = %d\n", num1, num2, result);

  result = num1 +-num2;
  printf("%d - %d = %d\n", num1, num2, result);

  result = num1 * num2;
  printf("%d * %d = %d\n", num1, num2, result);

  result = num1 / num2;
  printf("%d / %d = %d\n", num1, num2, result);

}

void calc2(void)
{
  // Operands.
  int num1, num2;

  // result variable.
  int result;

  // what operator to use?
  int operator;

  while(1)
  {
    // taking values to operand variable.
    printf("First operand : ");
    scanf("%d", &num1);
    printf("Second operand : ");
    scanf("%d", &num2);

    // announce to user.
    printf("\n ========== <1>Addition <2>Subtraction <3>Product <4>Division <5>Quit ========== \n");
    printf("What kind of operator that you use for %d %d ? : ", num1, num2);
    scanf("%d", &operator);

    // do the task according to operator. (using if else phrase)
    if (operator == 1) result = num1 + num2;
    else if (operator == 2) result = num1 - num2;
    else if (operator == 3) result = num1 * num2;
    else if (operator == 4)
    {
      if(num2 == 0) printf("Cannot divide by 0... Try again.\n\n");
      else result = num1 / num2;
    }
    else if (operator == 5) break;    // quit.
    else printf("You typed worng number for operator.\n");
    //else end...

    // if user divide by 0.
    if (num2 == 0 && operator == 4) continue;

    // print the result.
    printf("Result : %d\n\n", result);

  }
}
