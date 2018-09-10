#include <stdio.h>

int main()
{
  int a, b;
  char ch;

  printf("First num : ");
  scanf("%d", &a);

  printf("The operator : ");
  scanf(" %c", &ch);

  printf("Second num : ");
  scanf("%d", &b);



  if (ch == '+') printf("%d %c %d = %d\n", a, ch, b, a + b);
  else if (ch == '-') printf("%d %c %d = %d\n", a, ch, b, a - b);
  else if (ch == '*') printf("%d %c %d = %d\n", a, ch, b, a * b);
  else if (ch == '/') printf("%d %c %d = %d\n", a, ch, b, a / b);
  else printf("Wrong operator.\n");

  return 0;

}
