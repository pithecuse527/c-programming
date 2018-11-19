#include <stdio.h>
#include <math.h>
#define PI 4*atan(1)

void compute(double r, double *area, double *circum);

int main()
{
    double r;
    double area, circum;

    printf("Type the radiuous : ");
    scanf("%lf", &r);

    compute(r, &area, &circum);

    printf("The area : %.5f\n", area);
    printf("The volume : %.5f\n\n", circum);

    return 0;
}

void compute(double r, double *area, double *circum)
{
  *area = 2 * r * PI;
  *circum = r * r * PI;

}
