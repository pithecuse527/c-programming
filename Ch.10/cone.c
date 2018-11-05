#include <stdio.h>
#include <math.h>

double coneVol(double r, double h);

int main()
{
  double r, h, result;

  printf("Type r : ");
  scanf("%lf", &r);

  printf("Type h : ");
  scanf("%lf", &h);

  result = coneVol(r, h);

  printf("Result : %lf\n\n", result);


}

double coneVol(double r, double h)
{

  return (1.0/3.0) * r * r * h * 4 * atan(1.);

}
