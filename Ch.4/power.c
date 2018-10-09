#include <stdio.h>
#include <math.h>

void pow1(void);
void pow2(void);
void pow3(void);

int main()
{
  pow3();

  return 0;

}

void pow1()
{
  int n;
  float x;

  printf("Value of x : ");
  scanf("%f", &x);
  printf("Value of n : ");
  scanf("%d", &n);

  printf("The result : %3.1f\n", pow(x,n));

}

void pow2()
{
  int n, i;
  float x;
  float result = 1.0;

  printf("Value of x : ");
  scanf("%f", &x);
  printf("Value of n : ");
  scanf("%d", &n);

  for(i = 0; i < n; i++) result *= x;

  printf("The result : %3.1f\n", result);

}

void pow3()
{
  int n, i;
  float x;
  float result = 1.0;

  printf("Value of x : ");
  scanf("%f", &x);
  printf("Value of n : ");
  scanf("%d", &n);

  if (n == 0)
    result = 1.0;
  else
  {
    if (n < 0)
    {
      n = -n;
      x = 1 / x;
    }

    for(i = 0; i < n; i++)
      result *= x;
  }

  printf("The result : %3.3f\n", result);

}
