#include <stdio.h>

int count = 0;

main()
{
  count++;

  printf("%d-st call\n", count);
  
  if (count < 10) main();

}
