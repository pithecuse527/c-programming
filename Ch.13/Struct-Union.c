#include <stdio.h>
#include <stdlib.h>
#define MALLOC(mem, size)  if( !(mem = malloc(size))  ){\
                            fprintf(stderr, "Insufficient memory!");\
                            exit(EXIT_FAILURE);\
                            }

typedef struct preson {
  char name[10];
  union _id{
    char phone[15];
    char jumin[15];
  }id;
}person;

main()
{
  person p1;

  printf("Name --> ");
  scanf("%s", p1.name);
  printf("Phone or identification number --> ");
  scanf("%s", p1.id.jumin);
  
  printf("Name ==> %s\n", p1.name);
  printf("Phone/ID ==> %s\n", p1.id.phone);

}
