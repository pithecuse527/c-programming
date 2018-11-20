#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI atan(1)*4
#define MALLOC(mem, size)  if( !(mem = malloc(size))  ){\
                            fprintf(stderr, "Insufficient memory!");\
                            exit(EXIT_FAILURE);\
                            }
#define MAX_LEN 30

typedef struct cone {
  int radious;
  int height;
  float volume;
  float surface;
  char name[MAX_LEN+1];
} Cone;

Cone coneInit(int r, int h);
Cone coneVolCmp(Cone c1, Cone c2);
Cone coneSurCmp(Cone c1, Cone c2);

main()
{
  int r, h;

  printf("cone1's Radious : ");
  scanf("%d", &r);
  printf("cone1's Height : ");
  scanf("%d", &h);
  Cone cone1 = coneInit(r, h);

  printf("cone2's Radious : ");
  scanf("%d", &r);
  printf("cone2's Height : ");
  scanf("%d", &h);
  Cone cone2 = coneInit(r, h);

  printf("===== This is the first cone =====\n");
  printf("%d %d %f %f\n", cone1.radious, cone1.height, cone1.volume, cone1.surface);
  printf("%s\n\n", cone1.name);

  printf("===== This is the second cone =====\n");
  printf("%d %d %f %f\n", cone2.radious, cone2.height, cone2.volume, cone2.surface);
  printf("%s\n\n", cone2.name);

  printf("Compare volume between cone1 and cone2 ==> %s\n", coneVolCmp(cone1, cone2).name);
  printf("Compare surface between cone1 and cone2 ==> %s\n", coneSurCmp(cone1, cone2).name);

  printf("\n\n");

}

Cone coneInit(int r, int h)
{
  Cone cone;

  cone.radious = r;
  cone.height = h;
  cone.volume = 1.0/3.0 * PI * r * r * h;
  cone.surface = PI * r * r + 0.5 * r * sqrt(h*h + r*r);
  printf("Type the cone's name : ");
  scanf("%s", &cone.name);

  return cone;
}

Cone coneVolCmp(Cone c1, Cone c2)
{
  if (c1.volume >= c2.volume) return c1;
  return c2;

}

Cone coneSurCmp(Cone c1, Cone c2)
{
  if (c1.surface >= c2.surface) return c1;
  return c2;

}
