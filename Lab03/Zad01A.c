#include <stdio.h>
#include <limits.h>
#include <float.h>

int main ()
{
  float a, A;
  a = FLT_EPSILON;
  A = FLT_DIG;
  double b, B;
  b = DBL_EPSILON;
  B = DBL_DIG;
  long double c, C;
  c = LDBL_EPSILON;
  C = LDBL_DIG;
  printf ("'ziarno' float = %f\n", a);
  printf ("'precyzja' float = %f\n", A);
  printf ("'ziarno' double = %lf\n", b);
  printf ("'precyzja' double = %lf\n", B);
  printf ("'ziarno' long double = %Lf\n", c);
  printf ("'precyzja' long double = %Lf\n", C);
  return 0;
}
