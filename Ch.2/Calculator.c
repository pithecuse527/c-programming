//
//  Calculator.c
//  Basic calculator.
//
//  Created by Ji Hong Guen on 9/5/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

void calculator(void);

int main()
{
  calculator();

  return 0;
  
}

void calculator(void)
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

    // do the task according to operator's value.
    switch(operator)
    {
      case 1 : result = num1 + num2;
               break;
      case 2 : result = num1 - num2;
               break;
      case 3 : result = num1 * num2;
               break;
      case 4 : if(num2 == 0) printf("Cannot divide by 0... Try again.\n\n");
               else result = num1 / num2;
               break;
      case 5 : break;
      default : printf("You typed worng number for operator.\n");
    }

    if (operator == 5) break;
    if (num2 == 0 && operator == 4) continue;

    printf("Result : %d\n\n", result);

  }
}
