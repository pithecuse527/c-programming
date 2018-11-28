//
//  Calculator.c
//  Basic calculator (using argv).
//
//  Created by Ji Hong Guen on 11/28/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid(int argc, char **argv);
void calculator(float op1, float op2, char *operator);

int main(int argc, char *argv[])
{
  if(!valid(argc, argv))
  {
    printf("Invalid equatioin!\n");
    printf("Ex) Calculator 2.5 5.5 +\n");
    return 0;
  }

  int i;
  float num_lst[argc-1];

  for (i = 1; i < argc-1; i++)
    num_lst[i-1] = atof(argv[i]);

  calculator(atof(argv[1]), atof(argv[2]), argv[argc-1]);
  return 0;
}

int valid(int argc, char **argv)
{
  int i;
  if (argc != 4) return 0;

  for(i=1; i < argc-1; i++)
    if( !strcmp(argv[i], "+") || !strcmp(argv[i], "-") || !strcmp(argv[i], "/") || !strcmp(argv[i], "*") )
      return 0;
  return 1;
}

void calculator(float op1, float op2, char *operator)
{
  // result variable.
  float result;
  int op;

  if(!strcmp(operator, "+")) op = 1;
  else if(!strcmp(operator, "-")) op = 2;
  else if(!strcmp(operator, "*")) op = 3;
  else if(!strcmp(operator, "/")) op = 4;
  else
  {
    printf("Invalid operator...\n");
    return;
  }

    // do the task according to operator's value.
    switch(op)
    {
      case 1 : result = op1 + op2;
               break;
      case 2 : result = op1 - op2;
               break;
      case 3 : result = op1 * op2;
               break;
      case 4 : if(op2 == 0) printf("Cannot divide by 0... Try again.\n\n");
               else result = op1 / op2;
               break;
      case 5 : break;
      default : printf("You typed worng number for operator.\n");
    }

    if (op2 == 0 && op == 4) return;

    printf("Result : %f\n", result);

}
