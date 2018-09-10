//
//  Score.c
//  Distinguish score basis on number.
//
//  Created by Ji Hong Guen on 9/10/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

void switchFunc2(int num);
void elifFunc(int score);
void switchFunc(int score);

int main()
{
  int score;

  while(1)
  {
    printf("Type your score : ");
    scanf("%d", &score);

    elifFunc(score);
    switchFunc(score);
    switchFunc2(score);
  }

  return 0;
}

void elifFunc(int score)
{
  if (score >= 90) printf("A\n");
  else if (score >= 80) printf("B\n");
  else if (score >= 70) printf("C\n");
  else if (score >= 60) printf("D\n");
  else printf("F\n");

}

void switchFunc(int score)
{
  switch(score / 10)
  {
    case 9 : printf("A\n"); break;
    case 8 : printf("B\n"); break;
    case 7 : printf("C\n"); break;
    case 6 : printf("D\n"); break;
    default : printf("F\n");
  }
}

void switchFunc2(int num)
{
  switch (num % 2)
  {
    case 1 : printf("홀수!\n"); break;
    default : printf("짝수!\n"); break;
  }
}
