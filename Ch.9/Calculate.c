#include <stdio.h>
#include <math.h>
#define PI (4 * atan(1))

void compute(double r, double *area, double *circum);

main()
{
  double r, area, circum;

  printf("Type r : ");
  scanf("%lf", &r);

  compute(r, &area, &circum);

  printf("The area : %lf\n", area);
  printf("The circum : %lf\n", circum);

}

void compute(double r, double *area, double *circum)
{

  *area = 4 * atan(1) * r * r;
  *circum = 2 * 4 * atan(1) * r;

}
