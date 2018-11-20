#include <stdio.h>

union student {
  int total;
  char grade;
};

main()
{
  union student u;

  u.grade = 'A';
  u.total = 300;

  printf("\n--- Using Union ---\n");
  printf("grade ==> %c\n\n", u.grade);
  printf("total ==> %d\n", u.total);

}
