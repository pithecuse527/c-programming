#include <stdio.h>

int main()
{
  int var1;
  int var2 = 1;
  //int var3 = 1;

  for(var1 = 1; var1 <= 100; printf("%d\n", (var1++)));
  while(var2 <= 100) printf("%d\n", var2++);

  // while(var3 <= 100)
  // {
  //   printf("%d\n", var3);
  //   var3 = var3 + 1;
  // }

  return 0;

}
