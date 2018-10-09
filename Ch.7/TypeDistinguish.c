#include <stdio.h>

int main()
{

  char str[100];
  char ch;

  int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
  int i = 0;

  printf("Type the String (Lower than 100) : ");
  scanf("%s", str);

  do
  {
    ch = str[i];

    if(ch >= 'A' && ch <= 'Z')
      upper_cnt++;
    if(ch >= 'a' && ch <= 'z')
      lower_cnt++;
    if(ch >= '0' && ch <= '9')
      digit_cnt++;

    i++;

  } while(ch != '\0');

  printf("Upper char : %d\nLower char : %d\nDigit num : %d\n", upper_cnt, lower_cnt, digit_cnt);

  return 0;

}
