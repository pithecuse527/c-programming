#include <stdio.h>
#define MAX_SIZE 100
#define LIMIT(n) (n >= 1 && n <= 100)

int main(int argc, char const *argv[])
{
  int numbers[MAX_SIZE];

  int n = 1, sum = 0, i;

  do
  {
    printf("\nn must be in (1 <= n <= 100)\n");
    printf("How many numbers that you want to type? ");
    scanf("%d", &n);

  } while(!LIMIT(n));

  for(i=0; i<n; i++)
  {
    printf("%d's number : ", i+1);
    scanf("%d", &numbers[i]);

    sum += numbers[i];
  }

  printf("The sum : %d\nThe average : %f\n\n", sum, (float)sum/n);

  return 0;
  
}
