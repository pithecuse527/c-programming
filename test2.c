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
      printf("Current R3 : %f\n", R3);
      printf("l1 : ");
      scanf("%f", &l1);
      if(!l1) break;

      R4 = (100.0-l1)*(R3/l1);

      printf("R4 : %f\n\n", R4);
    }
  }

  return 0;

}
