#include <stdio.h>

int main()
{
  int var1;
  int var2 = 1;

  for(var1 = 1; var1 <= 100; printf("%d\n", (var1++)));
  while(var2 <= 100) printf("%d\n", var2++);

  return 0;

}
