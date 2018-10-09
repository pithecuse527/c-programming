#include <stdio.h>
#include <math.h>

int main()
{
  int radius;
  float result;

  printf("Type the radius : ");
  scanf("%d", &radius);


  result = (float)4/3 * (4 * atan(1.)) * (radius*radius*radius);

  printf("The volume of shpere : %f\n", result);

  return 0;

}
