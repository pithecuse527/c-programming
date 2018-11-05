#include <stdio.h>

int main()
{
  int n, i, j, k, s, sum=0;
  printf("Type the size of square matrix. ");
  scanf("%d", &n);

  int matrix1[n][n];
  int matrix2[n][n];
  int result_sum[n][n];
  int result_product[n][n];

  printf("Type for first matrix.\n");
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix1[i][j]);
    }

  printf("\n===== First matrix =====\n\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%2d  ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("\nType for second matrix.\n");
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix2[i][j]);
    }

  printf("\n===== Second matrix =====\n\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
      printf("%2d  ", matrix2[i][j]);
    printf("\n");
  }



  // Calculating the sum...
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      result_sum[i][j] = matrix1[i][j] + matrix2[i][j];

  // //Calculating the product...
  // for(k = 0; k < n; k++)
  // {
  //   for(i = 0; i < n; i++)
  //   {
  //     sum = 0;
  //     for(j = 0; j < n; j++)
  //       sum += (matrix1[k][j] * matrix2[j][i]);
  //     result_product[k][i] = sum;
  //   }
  // }


  // 배열로 해보기
  int tmp_sum[n];
  for(i=0; i<n; i++)
  {
    sum=0;
    for(j=0; j<n; j++)
    {
      sum += (matrix1[k][j] * matrix2[j][i]);
    }

  }


  // i=0;
  // j=0;
  // k=0;
  // s=0;
  // sum=0;
  // while(i < n)
  // {
  //   if(j < n)
  //   {
  //     printf("!!%d, %d * %d!!\n", sum, matrix1[i][j], matrix2[j][i]);
  //     sum += (matrix1[i][j] * matrix2[j][i]);
  //     j++;
  //   }
  //   else
  //   {
  //     printf("(%d, %d) : %d\n", k, s, sum);
  //     result_product[k][s] = sum;
  //     s++;
  //
  //     if(s == n)
  //     {
  //       k++;
  //       s=0;
  //       i++;
  //     }
  //     j = 0;
  //     sum = 0;
  //   }
  // }


  printf("\n\n===== The summed matrix =====\n");
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      printf("%2d  ", result_sum[i][j]);
    printf("\n");
  }

  printf("\n\n===== The producted matrix =====\n");
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      printf("%2d  ", result_product[i][j]);
    printf("\n");
  }

  printf("\n\n\n");

}
