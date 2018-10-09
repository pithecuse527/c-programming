#include <stdio.h>
#define LEAP_YEAR(y) ( ( ( (y) % 4 == 0) && ( (y) % 100 != 0 ) ) || ( (y) % 400 == 0 ) )

void leapYear1(void);
void leapYear2(void);

int main()
{

  leapYear2();

  return 0;

}

void leapYear1()
{
  int year;

  printf("Type the year : ");
  scanf("%d", &year);

  if (LEAP_YEAR(year))
    printf("%d is leap year.\n", year);
  else
    printf("%d is NOT leap year\n", year);

}

void leapYear2()
{
  int init_year = 2000;
  int fin_year = 3000;
  int i;

  for(i = init_year; i <= fin_year; i++)
    if ( ( (i % 4 == 0) && (i % 100 != 0) ) || (i % 400 == 0) )
      printf("%5d", i);

}
