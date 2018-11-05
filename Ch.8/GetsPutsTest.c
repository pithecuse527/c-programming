#include <stdio.h>
#include <string.h>
#define MAX_STR_SIZE 100

int main()
{

  char str_inpt[MAX_STR_SIZE];

  puts("Type the string : ");
  gets(str_inpt);

  printf("You typed : %s\n\n", str_inpt);

  return 0;

}
