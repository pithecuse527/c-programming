#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>


int getch(void);

int main()
{
  char password[5] = "5678";
  char input[5];
  int i;

  printf("Type 4 paasswd : ");
  for(i=0; i<4; i++)
  {
    input[i] = getch();
  }

  if(!strncmp(password, input, 4))
    printf("\npassed!\n");
  else
  {
    printf("The passwd ");
    for(i=0; i<4; i++) putch(input[i]);
    printf(" is worng!\n");
  }
    return 0;
}

int getch(void)
{

    struct termios oldt, newt;

    int ch;

    tcgetattr( STDIN_FILENO, &oldt );

    newt = oldt;

    newt.c_lflag &= ~( ICANON | ECHO );

    tcsetattr( STDIN_FILENO, TCSANOW, &newt );

    ch = getchar();

    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );

    return ch;

}
