#include <stdio.h>

int main()
{
  int i, j, k, sum=0;
  int row1, col1, row2, col2;

  printf("Type row of matrix1 : ");
  scanf("%d", &row1);

  printf("Type col of matrix1 : ");
  scanf("%d", &col1);

  printf("Type row of matrix2 : ");
  scanf("%d", &row2);

  printf("Type col of matrix2 : ");
  scanf("%d", &col2);

  int matrix1[row1][col1];
  int matrix2[row2][col2];
  int result_product[row1][col2];

  printf("Type for first matrix.\n");
  for(i = 0; i < row1; i++)
    for(j = 0; j < col1; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix1[i][j]);
    }

  printf("\n===== First matrix =====\n\n");
  for(i = 0; i < row1; i++)
  {
    for(j = 0; j < col1; j++)
    {
      printf("%2d  ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("\nType for second matrix.\n");
  for(i = 0; i < row2; i++)
    for(j = 0; j < col2; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix2[i][j]);
    }

  printf("\n===== Second matrix =====\n\n");
  for(i = 0; i < row2; i++)
  {
    for(j = 0; j < col2; j++)
      printf("%2d  ", matrix2[i][j]);
    printf("\n");
  }

  //Calculating the product...
  for(k = 0; k < row1; k++)
  {
    for(i = 0; i < col2; i++)
    {
      sum = 0;
      for(j = 0; j < row2; j++)
        sum += (matrix1[k][j] * matrix2[j][i]);
      result_product[k][i] = sum;
    }
  }


  printf("\n\n===== The producted matrix =====\n");
  for(i=0; i<row1; i++)
  {
    for(j=0; j<col2; j++)
      printf("%2d  ", result_product[i][j]);
    printf("\n");
  }

  printf("\n\n\n");

}
