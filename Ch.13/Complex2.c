//
//  Complex2.c
//  Define complex number using structure.
//
//  Created by Ji Hong Geun on 19/11/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MALLOC(mem, size)  if( !(mem = malloc(size))  ){\
                            fprintf(stderr, "Insufficient memory!");\
                            exit(EXIT_FAILURE);\
                            }
// malloc을 사용하는 것과 똑같다고 보시면 됩니다.
// 보통 이런 식으로 사용하지는 않지만 2학년 자료구조 시간 때 왜 이렇게 사용하는지에 대해 배웁니다.

typedef struct complex {
	double re;
	double im;
} Complex;

typedef struct complex *c_ptr;      // Complex(복소수) 구조체에 대한 포인터입니다. 굳이 포인터를 사용하는 이유는 아래 기술했습니다.

void calculator(c_ptr x, c_ptr y);  // 계산기 함수 입니다. 본 계산기 함수는 사용자의 요구에 따른 연산을 하되,
                                    // 아래에 나와 있는 함수들을 이용하여 연산된 복소수 포인터를 받아옵니다.
Complex* addi(double a, double b, double c, double d);    // 덧셈
Complex* subt(double a, double b, double c, double d);    // 뺄셈
Complex* prod(double a, double b, double c, double d);    // 곱셈
Complex* divi(double a, double b, double c, double d);    // 나눗셈

main()
{
	c_ptr x, y;      // x와 y는 연산되어야 하는 복소수 포인터입니다.

	MALLOC(x, sizeof(*x));   // x = (*x)malloc(sizeof(*x));
	MALLOC(y, sizeof(*y));   // 윗 줄의 코드와 같다고 보시면 됩니다.
                           // 사실 Complex x를 사용해도 되지만 우리가 메모리에 대해 공부한 내용을
                           // 토대로 코드를 짜기 위함입니다.


  // ----- 다음은 사용자로부터 값을 받아오는 과정입니다. ----- //
	printf("Type the first complex's real numb : ");         // 받아온 값들을 x와 y에 가리키는 곳에 대입합니다.
	scanf("%lf", &(x -> re));
	printf("Type the first complex's imaginary numb : ");
	scanf("%lf", &(x -> im));

	printf("Type the second complex's real numb : ");
	scanf("%lf", &(y -> re));
	printf("Type the second complex's imaginary numb : ");
	scanf("%lf", &(y -> im));
  // --------------------------------------------- //

	calculator(x, y);  // 값을 저장한 포인터를 매개변수로 전달하면서 calculator()함수를 호출합니다.

  free(x);          // 더 이상 필요없으니 메모리를 free 해줍니다.
  free(y);

}

void calculator(c_ptr x, c_ptr y)
{
	int operator;          // 연산자를 고르기 위한 정수형 변수.
	c_ptr result = NULL;   // 연산된 결과를 저장하기 위한 포인터 변수를 선언하되, 아직 메모리 할당은 하지 않은 상태입니다.
	double a = x -> re;    // 연산을 보다 쉽게 하기위해 double형 변수 a, b, c, d에 저장합니다.
	double b = x -> im;
	double c = y -> re;
	double d = y -> im;

	while(1)
  	{

		// 사용자에게 어떤 연산을 할 것인지 물어봅니다.
		printf("\n ========== <1>Addition <2>Subtraction <3>Product <4>Division <5>Quit ========== \n");
		printf("What kind of operator you use for %5.3lf+%5.3lfi  %5.3lf+%5.3lfi ? : ", a, b, c, d);
    	scanf("%d", &operator);

		// 변수 operator에 따른 연산을 수행합니다. 각각의 case안에 해당되는 연산을 수행하는 함수를 호출합니다.
		switch(operator)
		{
			case 1 :
				result = addi(a,b,c,d);               // addi함수는 계산해야 할 변수들을 매개변수로 받아오고 연산을 수행합니다.
				printf("Result : %lf + %lfi\n", result->re, result->im);
				if(result) free(result);							// 연산에 문제가 없었으면 메모리를 반환합니다.
				break;
			case 2 :
				result = subt(a,b,c,d);
				printf("Result : %lf + %lfi\n", result->re, result->im);
				if(result) free(result);
				break;
			case 3 :
				result = prod(a,b,c,d);
				printf("Result : %lf + %lfi\n", result->re, result->im);
				if(result) free(result);
				break;
			case 4 :
				   if(!c && !d) printf("Cannot divide by 0... Try again.\n\n");   // 0으로 나누려 할 때.
				   else
				   {
					   result = divi(a,b,c,d);
					   printf("Result : %lf + %lfi\n", result->re, result->im);
					   if(result) free(result);
				   }
				   break;
			case 5 : break;
			default : printf("You typed worng number for operator.\n");
		}

		if (operator == 5) break;             // 5번은 종료입니다.
    if(!c && !d) continue;                // 다음 구문과 같습니다. ===> if(c == 0 && d == 0) continue;
                                          // 0으로 나누려 할 때!


	}

}

Complex* addi(double a, double b, double c, double d)
{
	c_ptr result;                      // 결과를 저장할 복소수를 선언합니다. 바로 아랫줄과 하나의 묶음으로 봐주시면 좋겠습니다.
	MALLOC(result, sizeof(*result));


	result -> re = a + c;              // 연산이 끝난 뒤 그 결과값을 result 포인터가 가리키는 곳의 요소(result -> re)에 대입합니다.
	                                   // 다음과 같다고 봐도 좋습니다.    (*result).re = a + c;
  result -> im = b + d;

	return result;                     // 연산이 끝나면 그 복소수를 반환해야합니다. addi() 함수의 반환하는 자료형을 잘 살펴보면
                                     // Complex(복소수 구조체) 포인터를 반환함을 알 수 있습니다.
                                     // 포인터를 반환함으로써 결과로 생성된 복소수 구조체를 그대로 return 할 수 있게 됩니다.
                                     // 포인터를 사용하는 이유는 여러 가지입니다. 포인터를 이용하여 메모리에 직접 접근하여 데이터를 다룰 때도 있지만
                                     // 다음과 같이 다른 함수에서 메모리를 할당하고 그 메모리의 위치를 잃지 않기 위해 사용할 때도 있습니다.

}

Complex* subt(double a, double b, double c, double d)
{
	c_ptr result;
	MALLOC(result, sizeof(*result));

	result -> re = a - c;
	result -> im = b - d;

	return result;
}

Complex* prod(double a, double b, double c, double d)
{
	c_ptr result;
	MALLOC(result, sizeof(*result));

	result -> re = a*c - b*d;
	result -> im = a*d + b*c;

	return result;
}

Complex* divi(double a, double b, double c, double d)
{
	c_ptr result;
	MALLOC(result, sizeof(*result));

	result -> re = (a*d+b*d)/(c*c+d*d);
	result -> im = (b*c-a*d)/(c*c+d*d);

	return result;
}
