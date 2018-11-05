#include <stdio.h>

void callByValueSwap(int a, int b);
void callByReferenceSwap(int *pa, int *pb);
void listChange(int a[]);

main()
{
  int a = 10, b = 20;
  int list_a[2] = {0, 1};

  // printf("\nbefore call : a = %d, b = %d\n", a, b);
  // //callByValueSwap(a, b);
  // callByReferenceSwap(&a, &b);
  // printf("after call : a = %d, b = %d\n\n", a, b);

  printf("\nbefore call : list_a[0] = %d, list_a[1] = %d\n", list_a[0], list_a[1]);
  listChange(list_a);
  printf("after call : list_a[0] = %d, list_a[1] = %d\n\n", list_a[0], list_a[1]);

}

void callByValueSwap(int a, int b)
{
  a = 20;
  b = 10;
  printf("in function : a = %d, b = %d\n", a, b);

}

void callByReferenceSwap(int *pa, int *pb)
{
  int t;
  t = *pa;
  *pa = *pb;
  *pb = t;
  printf("in function: a = %d b = %d\n", *pa, *pb);
}

void listChange(int a[])
{
  a[0] = 1;
  a[1] = 0;
  printf("in function: list_a[0] = %d, list_a[1] = %d\n", a[0], a[1]);

}
