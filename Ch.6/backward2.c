#include <stdio.h>
#include "StringCount.c"
#define MAX_SIZE 100

int main(int argc, char const *argv[])
{
  // The string.
  char str[MAX_SIZE];

  // length of the string.
  int str_cnt;

  // running index.
  int i;

  // Taking string from user and show the string that typed.
  printf("Eng & Num (not more than 100) : ");
  scanf("%s", str);
  printf("\n");
  printf("You typed : %s\n", str);

  printf("Changed : ");
  //str_cnt = strlen(str);
  str_cnt = strCounter1(str);

  // Show the character of string from the end of the string to the start of the string.
  for(i = str_cnt; i >= 0; i--)
    printf("%c", str[i]);

  printf("\n\n");

  return 0;

}
