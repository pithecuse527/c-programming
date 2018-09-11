#include <string.h>

int main()
{
  char str[100];
  int str_cnt;
  int i;

  printf("Eng & Num (not more than 100) : ");
  scanf("%s", &str);

  printf("\n");
  printf("You typed : %s\n", str);
  printf("Changed : ");

  str_cnt = strlen(str);

  for(i = str_cnt; i >= 0; i--)
    printf("%c", str[i]);

  printf("\n");

  return 0;
}
