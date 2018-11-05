#include <stdio.h>
#include <math.h>

void sqrt1(void);
void sqrt2(void);

int main()
{

  sqrt1();
  //sqrt2();
  return 0;

}

void sqrt1()
{
  float n, result;

  while(1)
  {

    printf("Type n (float) : ");
    scanf("%f", &n);

    if (n < 0) break;

    result = sqrt(n);
    printf("Result : %.5f\n", result);

  }

}

void sqrt2()
{
  float n, result;
  
  do
  {

    printf("Type n (float) : ");
    scanf("%f", &n);

    if (n < 0) continue;

    result = sqrt(n);
    printf("Result : %.5f\n", result);

  }while(1);

}
