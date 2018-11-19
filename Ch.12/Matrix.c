#include <stdio.h>
#include <stdlib.h>
#define MALLOC(p, t, s)  if( !(p = (t)malloc(s))  ){\
                            fprintf(stderr, "Insufficient memory!");\
                            exit(EXIT_FAILURE);\
                            }
                            // visual...

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

  //MALLOC(matrix1, (int**), sizeof(int*) * m);                    // Making matrix1.
  matrix1 = (int**)malloc(sizeof(int*) * m);
  for(i=0; i<m; i++) MALLOC(matrix1[i], int*, sizeof(int) * n);

  //MALLOC(matrix2, (int*), sizeof(int**) * m);                    // Making matrix2.
  matrix2 = (int**)malloc(sizeof(int*) * n);
  for(i=0; i<n; i++) MALLOC(matrix2[i], int*, sizeof(int) * s);

  result_product = (int**)malloc(sizeof(int*) * m);
  for(i=0; i<n; i++) MALLOC(result_product[i], int*, sizeof(int) * s);

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
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%2d  ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("\n===== Second matrix =====\n\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < s; j++)
    {
      printf("%2d  ", matrix2[i][j]);
    }
    printf("\n");
  }

  //Calculating the product...
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

  printf("\n\n===== The producted matrix =====\n");
  for(i=0; i<m; i++)
  {
    for(j=0; j<s; j++)
      printf("%2d  ", result_product[i][j]);
    printf("\n");
  }

  printf("Do sum? ");
  scanf("%d", &do_sum);

  if(do_sum)
  {
    result_sum = (int**)malloc(sizeof(int*) * m);
    for(i=0; i<m; i++) MALLOC(result_sum[i], int*, sizeof(int) * n);

    // Calculating the sum...
    for(i = 0; i < m; i++)
      for(j = 0; j < n; j++)
        result_sum[i][j] = matrix1[i][j] + matrix2[i][j];

    for(i = 0; i < m; i++)
    {
      for(j = 0; j < n; j++)
        printf("%2d  ", result_sum[i][j]);
      printf("\n");
    }
  }

  return 0;
}
