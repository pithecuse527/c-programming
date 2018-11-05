#include <stdio.h>

void CharBinaryPrt(char c);   // Print binary number.

main()
{
  char tmp;   // For taking values.

  while(1)
  {
    printf("Type tmp char : ");
    scanf(" %c", &tmp);
    printf("The hexa : %x\n", tmp);   // To check whether the function is right or wrong.
    CharBinaryPrt(tmp);
  }
  
}

void CharBinaryPrt(char c)
{
  int i;
  unsigned char y = 0x80;   // initial y's binary number : 1000 0000
  for (i = 0; i<8; i++)
  {
    if ((c&y))         // Check with masking value.
      printf("1");
    else
      printf("0");
    y >>= 1;           // Move the masking value.
  }
  printf("\n");
}
