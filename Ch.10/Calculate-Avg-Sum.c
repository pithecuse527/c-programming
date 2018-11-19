#include <stdio.h>

void compArray(double A[], int size, double *sum, double *mean);

main()
{

  double A[] = {1.2, 0, 3.4, 4.5, 5.6, 6.7};
  int size = sizeof(A) / sizeof(*A);
  printf("The size : %d\n", size);
  double sum = 0.0;
  double mean = 0.0;

  compArray(A, size, &sum, &mean);
  printf("%lf %lf\n", sum, mean);

}

void compArray(double A[], int size, double *sum, double *mean)
{
  int i;

  for(i=0; i<size; i++) *sum += A[i];

  *mean = *sum / size;

}
