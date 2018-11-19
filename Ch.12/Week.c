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

  for(i=0; i < week_lst_size; i++)
  {
    printf("Type the string for weekday[%d] : ", i);
    scanf("%s", imsi);
    weekday[i] = (char*)malloc((sizeof(char) * strlen(imsi)) + 1);
    strcpy(weekday[i], imsi);
  }

  while(1)
  {
    printf("Choose the num (0-6) : ");
    scanf("%d", &choose);

    if(choose < 0) break;

    printf("%s\n", weekday[choose]);

  }

}
