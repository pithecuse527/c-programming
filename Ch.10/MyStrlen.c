#include <stdio.h>
#define MAX_STR_LEN 35

int myStrlen(char *str);

main()
{
  char str1[MAX_STR_LEN];

  printf("Type the strinig : ");
  scanf("%s", str1);

  printf("\nThis is the length of the string : %d\n\n", myStrlen(str1));

}

int myStrlen(char *str)
{
  int count = 0;
  while(*(str++)) count++;
  return count;
}
