//
//  Scholarship.c
//  Who recieves the Scholarship??
//
//  Created by Ji Hong Guen on 9/10/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>

int main()
{
  int score;

  while(1)
  {
    printf("Type your score : ");
    scanf("%d", &score);

    switch (score >= 70)
    {
      case 1 :
        printf("합격입니다.\n");
        switch (score / 10)
        {
          case 9 :
            printf("등록금 면제 장학금 받습니다.\n");
          case 8 :
            printf("입학금 면제 장학금 받습니다.\n");
        }
        break;
      default : printf("불합격입니다.\n");
    }

  }
    return 0;
}
