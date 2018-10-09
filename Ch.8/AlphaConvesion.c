#include <stdio.h>
#define MAGIC_NUM 32

char Converse1(char ch);    // using math operator.
char Converse2(char ch);    // using bit operator.

int main()
{
  char ch;

while(1)
{
    printf("Type the character : ");
    scanf(" %c", &ch);

    printf("Result : %c\n\n", Converse2(ch));

  }

  return 0;

}

char Converse1(char ch)
{

  if(ch >= 'A' && ch <= 'Z') return (ch + MAGIC_NUM);
  else if (ch >= 'a' && ch <= 'z') return (ch - MAGIC_NUM);
  else return '!';

}

char Converse2(char ch)
{
  //
  // if(ch >= 'A' && ch <= 'Z') return (ch | MAGIC_NUM);
  // else if (ch >= 'a' && ch <= 'z') return (ch ^ MAGIC_NUM);
  // else return '!';

  if(ch >= 'A' && ch <= 'Z') return (16 << 1) | ch ;        // WTF...??
  else if (ch >= 'a' && ch <= 'z') return (16 << 1) ^ ch;
  else return '!';


}
