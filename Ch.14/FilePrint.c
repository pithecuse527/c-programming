#include <stdio.h>

int main(int argc, char *argv[])
{
  char str[200];
  FILE *rfp;

  if(argc != 2)
  {
    printf("Invalid argc!\n");
    return 0;
  }

  rfp = fopen(argv[1], "r");

  while(1)
  {
    fgets(str, 199, rfp);
    if(feof(rfp)) break;
    printf("%s", str);
  }

  fclose(rfp);
}
