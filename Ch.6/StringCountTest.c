#include <stdio.h>
#include "StringCount.c"
#define MAX_SIZE 100

int main(int argc, char const *argv[])
{
  //char *str1 = "hoho";
  char str1[MAX_SIZE] = "12345";

  printf("%d\n\n", strCounter1(str1));

  return 0;
}
