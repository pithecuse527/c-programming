#include <stdio.h>

int main()
{

  int number;
  int i = 1, result = 1;

  while(1)
  {
    printf("Type number : ");
    scanf("%d", &number);
    if(number < 0) break;

    do
    {
        result *= i;
        i++;
    } while(i <= number);

    if(number == 0) result = 1;

    printf("%d\n", result);

  }

  return 0;

}
