#include "func.h"

int iterFactorial(int x)
{
  int result = 1;

  while(1)
  {
    if(!x) return result;

    result *= x--;

  }

}

int recurFactorial(int x)
{
  if (x == 1) return 1;

  return x * recurFactorial(x-1);

}
