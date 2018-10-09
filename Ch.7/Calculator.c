#include <stdio.h>

int main()
{
  int operand1, operand2;
  char operator;

  while(1)
  {
    printf("Type the operand1 : ");
    scanf("%d", &operand1);
    printf("Type the operator : ");
    scanf(" %c", &operator);
    printf("Type the operand2 : ");
    scanf("%d", &operand2);

    switch (operator)
    {
      case '+' :
        printf("%d %c %d = %d\n", operand1, operator, operand2, operand1 + operand2);
        break;
      case '-' :
        printf("%d %c %d = %d\n", operand1, operator, operand2, operand1 - operand2);
        break;
      case '*' :
        printf("%d %c %d = %d\n", operand1, operator, operand2, operand1 * operand2);
        break;
      case '/' :
        if(operand2 == 0)
        {
          printf("Cannot divide with 0.\n");
          break;
        }
        printf("%d %c %d = %d\n", operand1, operator, operand2, operand1 / operand2);
        break;
      case '%' :
        if(operand2 == 0)
        {
          printf("Cannot divide with 0.\n");
          break;
        }
        printf("%d %c %d = %d\n", operand1, operator, operand2, operand1 % operand2);
        break;
      default :
        printf("You typed something wrong...\n");
    }

  }

  return 0;
}
