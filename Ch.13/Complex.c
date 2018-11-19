#include <stdio.h>
#include <stdlib.h>
#define MALLOC(mem, size)  if( !(mem = malloc(size))  ){\
                            fprintf(stderr, "Insufficient memory!");\
                            exit(EXIT_FAILURE);\
                            }

typedef struct complex {
	double re;
	double im;
} Complex;

typedef struct complex *c_ptr;

void calculator(c_ptr x, c_ptr y);
Complex* addi(double a, double b, double c, double d);			// Divide the task. Make Complex structure element and return it.
Complex* subt(double a, double b, double c, double d);
Complex* prod(double a, double b, double c, double d);
Complex* divi(double a, double b, double c, double d);

main()
{
	c_ptr x, y, result;

	MALLOC(x, sizeof(*x));
	MALLOC(y, sizeof(*y));

	printf("Type the first complex's real numb : ");
	scanf("%lf", &(x -> re));
	printf("Type the first complex's imaginary numb : ");
	scanf("%lf", &(x -> im));

	printf("Type the second complex's real numb : ");
	scanf("%lf", &(y -> re));
	printf("Type the second complex's imaginary numb : ");
	scanf("%lf", &(y -> im));

	calculator(x, y);

}

void calculator(c_ptr x, c_ptr y)
{
	int operator;
	c_ptr result = NULL;
	double a = x -> re;
	double b = x -> im;
	double c = y -> re;
	double d = y -> im;

	while(1)
  	{

		// announce to user.
		printf("\n ========== <1>Addition <2>Subtraction <3>Product <4>Division <5>Quit ========== \n");
		printf("What kind of operator you use for %5.3lf+%5.3lfi  %5.3lf+%5.3lfi ? : ", a, b, c, d);
    	scanf("%d", &operator);

		// do the task according to operator's value.
		switch(operator)
		{
			case 1 :
				result = addi(a,b,c,d);
				printf("Result : %lf + %lfi\n", result->re, result->im);
				if(result) free(result);							// If there is no problem with it, free the memory.
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
				   if(!c && !d) printf("Cannot divide by 0... Try again.\n\n");
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

		if (operator == 5) break;
    	if(!c && !d) continue;

	}

}

Complex* addi(double a, double b, double c, double d)
{
	c_ptr result;
	MALLOC(result, sizeof(*result));

	result -> re = a + c;
	result -> im = b + d;

	return result;
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
