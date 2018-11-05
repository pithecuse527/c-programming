#include <stdio.h>
#include <stdlib.h>

int count = 0;

void takeValue(int **matrix);

int main()
{
  int i, j;
  int **matrix;

  takeValue(matrix);

  printf("\n===== First matrix =====\n\n");
  for(i = 0; i < M; i++)
  {
    for(j = 0; j < N; j++)
      printf("%2d  ", matrix[i][j]);
    printf("\n");
  }

}

void takeValue(int **matrix)
{
  int row, col, i, j;

  count++;
  printf("Type the row (matrix%d) :  ", count);
  scanf("%d", &row);
  printf("Type the col (matrix%d) : ", count);
  scanf("%d", &col);

  matrix = malloc(sizeof(int*) * row);
  for(i=0; i<row; matrix[i++] = malloc(sizeof(int)*col));

  printf("Type value for matrix.\n");
  for(i = 0; i < row; i++)
    for(j = 0; j < col; j++)
    {
      printf("(%d, %d) : ", i+1, j+1);
      scanf("%d", &matrix[i][j]);
    }

}
