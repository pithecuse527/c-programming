#include <stdio.h>

int main()
{
  int num;
  int index;

  printf("Type num : ");
  scanf("%d", &num);

  printf("\n\nDivided by 3 or 7...\n");
  for (index = 1; index <= num; index++)
    if(index % 3 == 0 || index % 7 == 0)
      printf("%d ", index);

  printf("\n\nDivided by 3 and 7...\n");
  for (index = 1; index <= num; index++)
    if(index % 3 == 0 && index % 7 == 0)
      printf("%d ", index);
      
  printf("\n\n");

  return 0;

}
