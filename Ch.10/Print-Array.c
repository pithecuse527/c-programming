#include <stdio.h>

void prtArray(double A[], int size);

main()
{

  double A[] = {1.2, 2.3, 3.4, 4.5, 5.6};
  int size = sizeof(A) / sizeof(*A);

  prtArray(A, size);

}

void prtArray(double A[], int size)
{

  int i;
  for(i = 0; i < size; i++) printf("%.1lf ", A[i]);

  printf("\n");

}
