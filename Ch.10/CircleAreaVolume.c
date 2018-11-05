#include <stdio.h>
#include <math.h>

float areaCalc(float r);
float volumeCalc(float r);

int main()
{
    float r;

    printf("Type the radiuous : ");
    scanf("%f", &r);

    printf("The area : %.3f\n", areaCalc(r));
    printf("The volume : %.3f\n\n", volumeCalc(r));

    return 0;
}

float areaCalc(float r)
{
  return r*r*(atan(1)*4);
}

float volumeCalc(float r)
{
  return (4.0 / 3) * (atan(1)*4) * r * r * r;
}
