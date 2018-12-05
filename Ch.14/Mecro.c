#include <stdio.h>
#include <math.h>
#define PI atan(1)*4
#define DIFF 'a' - 'A'
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define VOLUME(r, h) (r*r*PI*h)
#define TOLOWER(c) ((c) >= 'A' && (c) <= 'Z' ? (c)+DIFF : NULL)
#define ISUPPER(c) ((c) >= 'A' && (c) <= 'Z' ? 1 : 0)
#define GETMIN(x, y, z) ((x) <= (y) ? (x) <= (z) ? (x) : (z) : (y) <= (z) ? (y) : (z))

main()
{
  char c;

  printf("%d\n", ABS(-5));
  printf("%f\n", VOLUME(3, 4));
  printf("%d\n", GETMIN(1,2,3));

  while(1)
  {
    printf("Type 1 char : ");
    scanf(" %c", &c);
    if(ISUPPER(c)) c = TOLOWER(c);
    printf("%c\n", c);
  }

  printf("%c\n", TOLOWER('C'));


}
