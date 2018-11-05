#include <stdio.h>
#include <stdlib.h>

// int[] matrixInput(void);
// void  matrixPrint(void);
// int* calSum(int* matrix1, int* matrix2);
// int* calProduct(int* matrix1, int* matrix2);


int main()
{
  int n, i, j, row, col;
  int *matrix1, *matrix2;

  printf("The size of row : ");
  scanf("%d", &row);
  printf("The size of col : ");
  scanf("%d", &col);

  matrix1 = (int*)malloc(sizeof(int) * row);
  for(i=0; i<row; i++)
    matrix1[i] = (int*)malloc(sizeof(int) * col);

  printf("Type for first matrix.\n");
  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix1[i][j]);
    }

  printf("\n===== First matrix =====\n\n");
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      printf("%2d  ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("\nType for second matrix.\n");
  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix2[i][j]);
    }

  printf("\n===== Second matrix =====\n\n");
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
      printf("%2d  ", matrix2[i][j]);
    printf("\n");
  }

  // calSum(matrix1, matrix2);
  // calProduct(matrix1, matrix2);
  //
  // printf("\n");

  return 0;

}

// void calSum(int matrix1[][3], int matrix2[][3])
// {
//   int i, j;
//   int res_matrix[3][3];
//
//   for(i = 0; i < 3; i++)
//     for(j = 0; j < 3; j++)
//       res_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
//
//   printf("\n\n===== The summed matrix =====\n");
//   for(i=0; i<3; i++)
//   {
//     for(j=0; j<3; j++)
//       printf("%2d  ", res_matrix[i][j]);
//     printf("\n");
//   }
//
// }
//
// void calProduct(int matrix1[][3], int matrix2[][3])
// {
//   int i, j;
//   int res_matrix[3][3];
//
//   for(i = 0; i < 3; i++)
//     for(j = 0; j < 3; j++)
//       res_matrix[i][j] = matrix1[i][j] * matrix2[i][j];
//
//   printf("\n\n===== The producted matrix =====\n");
//   for(i=0; i<3; i++)
//   {
//     for(j=0; j<3; j++)
//       printf("%2d  ", res_matrix[i][j]);
//     printf("\n");
//   }
//
//
// }
