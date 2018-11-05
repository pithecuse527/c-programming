#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 3
#define P 3

int main()
{
  int i, j, k;
  int sum=0;
  int coef[N];

  int matrix1[M][N];
  int matrix2[N][P];
  int result_product[M][P];

  // printf("Type coefficient : \n");
  // for(i=0; i<N; i++) scanf("%d", &coef[i]);
  //
  // for(i=0; i<M; i++)
  //   for(j=0; j<N; j++)
  //     matrix1[i][j] = coef[j];

  srand(time(NULL));
  for(i=0; i<N; i++) coef[i] = rand() % 10;

  for(i=0; i<M; i++)
    for(j=0; j<N; j++)
      matrix1[i][j] = coef[j];

  printf("\n===== First matrix =====\n\n");
  for(i = 0; i < M; i++)
  {
    for(j = 0; j < N; j++)
      printf("%2d  ", matrix1[i][j]);
    printf("\n");
  }

  printf("\nType for second matrix.\n");
  for(i = 0; i < N; i++)
    for(j = 0; j < P; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix2[i][j]);
    }

  printf("\n===== Second matrix =====\n\n");
  for(i = 0; i < N; i++)
  {
    for(j = 0; j < P; j++)
      printf("%2d  ", matrix2[i][j]);
    printf("\n");
  }

  //Calculating the product...
  for(i = 0; i < M; i++)
  {
    for(j = 0; j < P; j++)
    {
      sum = 0;
      for(k = 0; k < N; k++)
        sum += (matrix1[i][k] * matrix2[k][j]);
      result_product[i][j] = sum;
    }
  }

  printf("\n\n===== The producted matrix =====\n");
  for(i=0; i<M; i++)
  {
    for(j=0; j<P; j++)
      printf("%2d  ", result_product[i][j]);
    printf("\n");
  }

  printf("\n\n\n");
}
