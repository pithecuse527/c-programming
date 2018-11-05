#include <stdio.h>

int factorial(int n);
int recursive_fact(int n);

int main()
{
  int n;

  printf("What to start? ");
  scanf("%d", &n);

  printf("The result of factorial : %d\n\n", recursive_fact(n));

  return 0;
}

int factorial(int n)
{
  int i, result = 1;

  for(i=2; i<=n; i++)
    result *= i;

  return result;

}

int recursive_fact(int n)
{
  if (n == 1) return 1;

  return n * recursive_fact(n-1);

}
