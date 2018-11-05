#include <stdio.h>
#include <string.h>

main()
{
  char ss[100];
  int count, i;
  char *p;

  printf("Type the string : ");
  scanf("%s", ss);

  count = strlen(ss);

  p = ss;

  printf("Backward ==> ");
  for(i = 0; i <count; i++) printf("%c", *(p+count-i-1));

  printf("\n");

}
