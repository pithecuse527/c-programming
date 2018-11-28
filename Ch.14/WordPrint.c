#include <stdio.h>
#include <string.h>
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

int main(int argc, char *argv[])
{
  int i, j;
  char *tmp_argv;

  for(i=argc-1; i>=1; i--)
    for(j=1; j < i; j++)
      if(strcmp(argv[j], argv[j+1]) > 0)
        SWAP(argv[j],argv[j+1],tmp_argv);

  for (i = 1; i < argc; i++)
    printf("%s\n", argv[i]);

  return 0;
}
