#include <stdio.h>
#include <stdlib.h>
#define MALLOC(p, t, s)  if( !(p = (t)malloc(s))  ){\
                            fprintf(stderr, "Insufficient memory!");\
                            exit(EXIT_FAILURE);\
                            }

int **imatrix(int m, int n);
void printMatrix(int m, int n, int* *matrix);
int **calcMatrixProduct(int m, int n, int s, int **matrix1, int **matrix2);
int **calcMatrixSum(int m, int n, int **matrix1, int **matrix2);

int main()
{

  int m, n, s, i, j, k, sum=0;
  int do_sum = 0;
  int* *matrix1;
  int* *matrix2;
  int* *result_product;
  int* *result_sum;

  printf("Type m : ");
  scanf("%d", &m);

  printf("Type n : ");
  scanf("%d", &n);

  printf("Type s : ");
  scanf("%d", &s);

  matrix1 = imatrix(m, n);
  matrix2 = imatrix(n, s);

  printf("Type for first matrix.\n");
  for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix1[i][j]);
    }

  printf("\nType for second matrix.\n");
  for(i = 0; i < n; i++)
    for(j = 0; j < s; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix2[i][j]);
    }

  printf("\n===== First matrix =====\n\n");
  printMatrix(m, n, matrix1);

  printf("\n===== Second matrix =====\n\n");
  printMatrix(n, s, matrix2);

  result_product = calcMatrixProduct(m, n, s, matrix1, matrix2);

  printf("\n\n===== The producted matrix =====\n");
  printMatrix(m, s, result_product);

  printf("Do sum? ");
  scanf("%d", &do_sum);

  if(do_sum)
  {
    printf("\n\n===== The summed matrix =====\n");
    result_sum = calcMatrixSum(m, n, matrix1, matrix2);
    printMatrix(m, n, result_sum);
  }

  printf("\n");

  return 0;
}


int** imatrix(int m, int n)
{
  int **a, i;
  a = (int **) malloc(m * sizeof(int *));
  if (a == NULL)
  {
    printf("memory alloc failed\n");
    exit(1);
  }

  for (i = 0; i < m; i++)
  {
    a[i] = (int *) malloc(n * sizeof(int));
    if (a[i] == NULL)
    {
      printf("memory alloc failed\n");
      exit(1);
    }
  }
  return a;
}

void printMatrix(int m, int n, int* *matrix)
{
  int i, j;

  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%2d  ", matrix[i][j]);
    }
    printf("\n");
  }

}

int **calcMatrixProduct(int m, int n, int s, int **matrix1, int **matrix2)
{
  int i, j, k, sum = 0;
  int* *result_product;
  result_product = imatrix(m, s);

  for(i = 0; i < m; i++)
  {
    for(j = 0; j < s; j++)
    {
      sum = 0;
      for(k = 0; k < n; k++)
        sum += (matrix1[i][k] * matrix2[k][j]);
      result_product[i][j] = sum;
    }
  }

  return result_product;
}

int **calcMatrixSum(int m, int n, int **matrix1, int **matrix2)
{
  int i, j, k, sum = 0;
  int* *result_sum;
  result_sum = imatrix(m, n);

  for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
      result_sum[i][j] = matrix1[i][j] + matrix2[i][j];

  return result_sum;
}
