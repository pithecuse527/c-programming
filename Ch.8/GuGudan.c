#include <stdio.h>

main()
{

  int gugu[9][9];
  int i,j;

  for(i=1;i<=9;i++)
    for(j=1;j<=9;j++)
      gugu[i][j] = i * j;

  for(i=1;i<=9;i++)
  {
    for(j=1;j<=9;j++)
      printf("%d * %d = %2d   ", j, i, gugu[i][j]);
    printf("\n");
  }

  printf("\n\n");
}
