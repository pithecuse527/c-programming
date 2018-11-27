#include <stdio.h>
#include <string.h>

main()
{

  char s[8] = "Basic-C";
  char a[8];
  strncpy(a, s, 3-1);
  
  printf("%s\n", a);

  printf("\n");

}
