#include <stdio.h>
#include <stdlib.h>
#define MALLOC(mem, size)  if( !(mem = malloc(size))  ){\
                            fprintf(stderr, "Insufficient memory!");\
                            exit(EXIT_FAILURE);\
                            }

typedef struct student{
  int age;
  char name[10];
} Student;

typedef struct student *stu_ptr;

int main()
{
  int cnt, i;
  stu_ptr students;

  printf("The number of students : ");
  scanf("%d", &cnt);

  MALLOC(students, (sizeof(Student))*cnt);

  for(i=0; i<cnt; i++)
  {
    printf("%d's age : ", i);
    scanf("%d", &((students+i)->age));
    printf("%d's name : ", i);
    scanf("%s", &((students+i)->name));
  }

  for(i=0; i<cnt; i++)
  {
    printf("%d's age : %d\n", i, (students+i)->age);
    printf("%d's name : %s\n\n", i, (students+i)->name);
  }

  return 0;

}
