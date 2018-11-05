#include <stdio.h>

main()
{
  int s[10] = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
  int tmp;
  int i, k;

  int *p;

  p = s;

  printf("Before arrayed s ==> ");
  for(i = 0; i < sizeof(s) / sizeof(int); i++) printf("%d ", *(p+i));
  printf("\n");

  for(i = 0; i < 9; i++)
    for(k = i+1; k < 10; k++)
      if( *(p+i) > *(p+k) )
      {
        tmp = *(p+i);
        *(p+i) = *(p+k);
        *(p+k) = tmp;
      }

  printf("After arrayed s ==> ");
  for(i = 0; i < sizeof(s) / sizeof(int); i++) printf("%d ", *(p+i));
  printf("\n");

}
