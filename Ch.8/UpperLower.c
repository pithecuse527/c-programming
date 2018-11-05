#include <stdio.h>
#define IS_IT_UPPER(c) ( c >= 65 && c <= 90)
#define IS_IT_LOWER(c) ( c >= 97 && c <= 122)
#define DIFF ('a' - 'A')

char alphaChange(char ch);

int main()
{
  char ch;

  while(1)
  {
    printf("Type the alphabet : ");
    scanf(" %c",&ch);

    if(IS_IT_LOWER(ch) || IS_IT_UPPER(ch)) ch = alphaChange(ch);
    else
    {
      printf("You typed something wrong.\n");
      continue;
    }

    printf("Changed : %c\n\n",ch);
  }

  return 0;
}

char alphaChange(char ch)
{

  if(IS_IT_LOWER(ch)) return ch - DIFF;
  else return ch + DIFF;

}
