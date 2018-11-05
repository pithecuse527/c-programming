#include <stdio.h>
#include <string.h>
#define MAX_STR_SIZE 100

int main()
{

  char str_inpt[MAX_STR_SIZE];
  char str_cpy[MAX_STR_SIZE];
  char str_cat[MAX_STR_SIZE];
  int length;


  printf("Type the string : ");
  scanf("%[^\n]s", str_inpt);
  length = strlen(str_inpt);    // Test of the strlen func.

  printf("\n\n==============================\n");
  printf("You typed : %s\n", str_inpt);
  printf("The length : %d\n", length);

  strcpy(str_cpy, str_inpt);    // Test of the strcpy func.

  printf("Copied : %s\n", str_cpy);
  printf("==============================\n\n");

  printf("Type the string that you want to concatenate : ");
  scanf("%s", str_cat);
  strcat(str_inpt, str_cat);    // Test of the strcat func.

  printf("\n\n==============================\n");
  printf("You typed : %s\n", str_cat);
  printf("Result : %s\n", str_inpt);

  if(strcmp(str_inpt, str_cpy) != 0)   // Test of the strcmp func.
  {
    printf("%s\n", str_inpt);
    printf("%s\n", str_cpy);
    printf("Both sentences are not same.\n");
  }
  printf("==============================\n\n");

  return 0;

}
