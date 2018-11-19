#include <stdio.h>

main()
{
  int i = 10, j = 20, tmp;
  int *p, *q;

  p = &i;
  q = &j;

  tmp = *p;
  *p = *q;
  *q = tmp;

  printf("i = %d, j = %d\n", i, j);

}
//
// #include <stdio.h>
//
// void swap(int *i, int *j);
//
// main()
// {
//   int i = 10, j = 20, tmp;
//
//   swap(&i, &j);
//
//   printf("i = %d j = %d\n", i, j);
//
// }
//
// void swap(int *i, int *j)
// {
//   int tmp;
//
//   tmp = *i;
//   *i = *j;
//   *j = tmp;
//
// }
//
