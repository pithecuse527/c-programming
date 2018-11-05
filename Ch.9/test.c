#include <stdio.h>

main()
{
  int aa[3] = {10, 20, 30};

  printf("\n");
  printf("aa[0]\'s value : %d, Address : %d\n", aa[0], &aa[0]);
  printf("aa[1]\'s value : %d, Address : %d\n", aa[1], &aa[1]);
  printf("aa[2]\'s value : %d, Address : %d\n", aa[2], &aa[2]);
  printf("aa\'s Address : %d\n", aa);
  printf("aa[1]\'s value : %d, Address : %d\n", aa[1], aa+1);
  printf("aa[2]\'s value : %d, Address : %d\n\n", aa[2], aa+2);

}
