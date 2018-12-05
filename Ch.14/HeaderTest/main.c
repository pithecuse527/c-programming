#include "func.h"
#include "Factorial.c"

main()
{
  int x, result;
  printf("Type num : ");
  scanf("%d", &x);

  result = iterFactorial(x);
  printf("%d\n", result);

  result = recurFactorial(x);
  printf("%d\n", result);

}
