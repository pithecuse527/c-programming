//
//  backward.c
//  Print the string backward.
//
//  Created by Ji Hong Guen on 9/12/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <string.h>

int main()
{
  // The string.
  char str[100];

  // length of the string.
  int str_cnt;

  // running index.
  int i;

  // Taking string from user and show the string that typed.
  printf("Eng & Num (not more than 100) : ");
  scanf("%s", &str);
  printf("\n");
  printf("You typed : %s\n", str);

  printf("Changed : ");
  str_cnt = strlen(str);

  // Show the character of string from the end of the string to the start of the string.
  for(i = str_cnt; i >= 0; i--)
    printf("%c", str[i]);
    
  printf("\n");

  return 0;
}
