#include <stdio.h>

void calIncliInter1(float *x1, float *y1, float *x2, float *y2, float *incline, float *y_inter);

main()
{
  float x1, y1, x2, y2, incline, y_inter;

  printf("Type x1 : ");
  scanf("%f", &x1);
  printf("Type y1 : ");
  scanf("%f", &y1);
  printf("Type x2 : ");
  scanf("%f", &x2);
  printf("Type y2 : ");
  scanf("%f", &y2);

  calIncliInter1(&x1, &y1, &x2, &y2, &incline, &y_inter);
  printf("incline : %f\ny_inter : %f\n", incline, y_inter);

}

void calIncliInter1(float *x1, float *y1, float *x2, float *y2, float *incline, float *y_inter)
{

  *incline = (*y2 - *y1) / (*x2 - *x1);
  *y_inter = ((*y1 - *y2) / (*x2 - *x1))*(*x1) + *y1;

}
