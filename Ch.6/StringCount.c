#include<stdio.h>

int strCounter1(char *str)
{
  int count = 0;

  for(;str[count];count++);

  return count;
}

int strCounter2(char str[])
{
  int count = 0;

  while(str[count] != '\0') count++;

  return count;
}
