#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{

  float l1, R3, R4;

  while(1)
  {
    printf("R3 : ");
    scanf("%f", &R3);
    if(!R3) break;

    while(1)
    {
      printf("R4 : ");
      scanf("%f", &R4);
      if(!R4) break;

      l1 = (100.0 * R3) / (R3 + R4);

      printf("l1 : %f\n\n", l1);
    }
  }

  return 0;

}