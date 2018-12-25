#include <stdio.h>

void makeTree(void);
void findPrime();
int isItPrime(int n);
void exchange(int *a, int *b);

main()
{
  makeTree();
  findPrime();

  // int a = 2, b = 3;
  // exchange(&a, &b);
  // printf("%d %d\n\n", a, b);

}

void makeTree(void)
{
  int i, j, h;

  printf("Height : ");
  scanf("%d", &h);

  printf("\n\n");

  for(i=0; i<h; i++)      // Pay attention to the increase mechanism.
  {
    for(j=0; j<h-i; j++) printf(" ");
    for(j=0; j<(2*i+1); j++) printf("*");
    printf("\n");
  }

  printf("\n\n");

}

void findPrime()
{
  int i=1;
  int to;

  printf("From 1 to where? ");
  scanf("%d", &to);

  while(i<=to)
  {
    if(isItPrime(i)) printf("%d is a prime number.\n", i);
    else printf("%d is NOT a prime number.\n", i);
    i++;
  }
}

int isItPrime(int n)
{
  int i;
  for(i=2; i<n; i++)
    if(!(n % i)) return 0;
  return 1;
}

void exchange(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
