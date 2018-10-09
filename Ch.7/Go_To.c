#include <stdio.h>

int main()
{
  int sum = 0;
  int i;

  for(i=1; i<100; i++)
  {
    sum += i;

    if(sum >= 2000)
    {
      printf("i = %d\n", i);
      break;
    }

  }

  MYGOTO:
    printf("The sum is more than 2000!\n\n");

  return 0;
  
}
