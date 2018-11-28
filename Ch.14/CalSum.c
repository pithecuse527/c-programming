#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i, sum = 0;
  int num_lst[argc-1];

  for (i = 1; i < argc; i++)
  {
    num_lst[i-1] = atoi(argv[i]);
    sum += num_lst[i-1];
  }
  printf("%d\n", sum);
}
