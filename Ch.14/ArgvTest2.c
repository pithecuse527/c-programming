#include <stdio.h>

main(int argc, char *argv[])
{
  int i;

  printf("parameter argc ==> %d\n", argc-1);

  for(i=1; i<argc; i++)
    printf("parameter argv[%d] ==> %s\n", i, argv[i]);

}
