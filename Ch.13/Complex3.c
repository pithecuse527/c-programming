#include <stdio.h>

typedef struct complex {
  double re;
  double im;
} Complex;

Complex getComplex();
void prtComplex(Complex x);
Complex cAdd(Complex x, Complex y);
void cAdd2(Complex *x, Complex *y, Complex *res);
Complex *cAdd3(Complex x, Complex y);

int main()
{
  Complex a, b, c, d, res, *e;

  a = getComplex();
  prtComplex(a);

  b = getComplex();
  prtComplex(b);

  c = cAdd(a, b);
  printf("First Add Func.\n");
  prtComplex(c);

  cAdd2(&a, &b, &d);
  printf("Second Add Func.\n");
  prtComplex(d);

  e = cAdd3(a, b);
  printf("Third Add Func.\n");
  prtComplex(*e);

  return 0;

}

Complex getComplex()
{
  Complex x;

	printf("Type the complex's real numb : ");
	scanf("%lf", &(x.re));
	printf("Type the complex's imaginary numb : ");
	scanf("%lf", &(x.im));

  return x;

}

void prtComplex(Complex x)
{
  printf("%lf ", x.re);
  if(x.im >= 0)
  {
    printf("+ ");
    printf("%lf\n", x.im);
  }
  else
  {
    printf("- ");
    printf("%lf\n", -(x.im));
  }
  printf("\n");

}

Complex cAdd(Complex x, Complex y)
{
  Complex res;

  res.re = x.re + y.re;
  res.im = x.im + y.im;

  return res;
}

void cAdd2(Complex *x, Complex *y, Complex *res)
{
  res->re = x->re + y->re;
  res->im = x->im + y->im;

}

Complex *cAdd3(Complex x, Complex y)
{
  Complex *res;
  res = malloc(sizeof(Complex));

  res->re = x.re + y.re;
  res->im = x.im + y.im;

  return res;
}
