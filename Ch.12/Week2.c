#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

main()
{

  char *weekday[7];
  char imsi[MAX_SIZE];
  int i, week_lst_size, choose;

  week_lst_size = sizeof(weekday) / sizeof(*weekday);

  for(i=0; i<week_lst_size; i++)
    weekday[i] = (char*)malloc((sizeof(char) * 15) + 1);

  // strcpy(weekday[0], "Sunday");
  // strcpy(weekday[1], "Monday");
  // strcpy(weekday[2], "Tuesday");
  // strcpy(weekday[3], "Wednesday");
  // strcpy(weekday[4], "Thursday");
  // strcpy(weekday[5], "Firday");
  // strcpy(weekday[6], "Saturday");

  while(1)
  {
    printf("Choose the num (0-6) : ");
    scanf("%d", &choose);

    if(choose < 0) break;

    printf("%s\n", weekday[choose]);

  }

}
