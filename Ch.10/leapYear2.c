#include <stdio.h>
#define LEAP_YEAR(y) ( ( ( (y) % 4 == 0) && ( (y) % 100 != 0 ) ) || ( (y) % 400 == 0 ) )

int isItLeapYear(int year);

int main()
{
  int year, i;

  for(i=2000; i < 2500; i++)
  {
    if(isItLeapYear(i))
      printf("%d ",i);
  }

  return 0;

}

int isItLeapYear(int year)
{
  if(LEAP_YEAR(year)) return 1;
  return 0;

}
